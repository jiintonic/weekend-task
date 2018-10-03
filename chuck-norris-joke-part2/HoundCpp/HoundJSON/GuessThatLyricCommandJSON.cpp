/* file "GuessThatLyricCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "GuessThatLyricCommandJSON.h"

#include "GuessThatLyricCommandJSON.h"
#include "GuessThatLyricStartGameCommandJSON.h"
#include "GuessThatLyricGuessCommandJSON.h"
#include "GuessThatLyricHintCommandJSON.h"
#include "GuessThatLyricNotUnderstoodCommandJSON.h"


GuessThatLyricCommandJSON::GuessThatLyricCommandJSON(const GuessThatLyricCommandJSON &)
  {
    assert(false);
  }

GuessThatLyricCommandJSON &GuessThatLyricCommandJSON::operator=(const GuessThatLyricCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *GuessThatLyricCommandJSON::extraDecadeToJSON(void) const
  {
    JSONIntegerValue *generated_integer_Decade = new JSONIntegerValue(storeDecade.get_o_integer());
    return generated_integer_Decade;
  }

JSONValue *GuessThatLyricCommandJSON::extraGuessedCorrectlyToJSON(void) const
  {
    JSONIntegerValue *generated_integer_GuessedCorrectly = new JSONIntegerValue(storeGuessedCorrectly.get_o_integer());
    return generated_integer_GuessedCorrectly;
  }

JSONValue *GuessThatLyricCommandJSON::extraHintsRemainingToJSON(void) const
  {
    JSONIntegerValue *generated_integer_HintsRemaining = new JSONIntegerValue(storeHintsRemaining);
    return generated_integer_HintsRemaining;
  }

JSONValue *GuessThatLyricCommandJSON::extraDifficultyToJSON(void) const
  {
    JSONStringValue *generated_string_Difficulty = new JSONStringValue(storeDifficulty.c_str());
    return generated_string_Difficulty;
  }

JSONValue *GuessThatLyricCommandJSON::extraCorrectAnswerToJSON(void) const
  {
    JSONStringValue *generated_string_CorrectAnswer = new JSONStringValue(storeCorrectAnswer.c_str());
    return generated_string_CorrectAnswer;
  }

JSONValue *GuessThatLyricCommandJSON::extraQuestionToJSON(void) const
  {
    JSONStringValue *generated_string_Question = new JSONStringValue(storeQuestion.c_str());
    return generated_string_Question;
  }

JSONValue *GuessThatLyricCommandJSON::extraSoundhoundLyricIDToJSON(void) const
  {
    JSONStringValue *generated_string_SoundhoundLyricID = new JSONStringValue(storeSoundhoundLyricID.c_str());
    return generated_string_SoundhoundLyricID;
  }

JSONValue *GuessThatLyricCommandJSON::extraGTLSoundhoundTrackIDToJSON(void) const
  {
    JSONStringValue *generated_string_GTLSoundhoundTrackID = new JSONStringValue(storeGTLSoundhoundTrackID.c_str());
    return generated_string_GTLSoundhoundTrackID;
  }

JSONValue *GuessThatLyricCommandJSON::extraCorrectTitleToJSON(void) const
  {
    JSONStringValue *generated_string_CorrectTitle = new JSONStringValue(storeCorrectTitle.c_str());
    return generated_string_CorrectTitle;
  }

JSONValue *GuessThatLyricCommandJSON::extraCorrectArtistToJSON(void) const
  {
    JSONStringValue *generated_string_CorrectArtist = new JSONStringValue(storeCorrectArtist.c_str());
    return generated_string_CorrectArtist;
  }

JSONValue *GuessThatLyricCommandJSON::extraPlayerLostToJSON(void) const
  {
    JSONValue *generated_boolean_PlayerLost = (storePlayerLost ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_PlayerLost;
  }

JSONValue *GuessThatLyricCommandJSON::extraGuessedTracksListToJSON(void) const
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

void GuessThatLyricCommandJSON::fromJSONDecade(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Decade of GuessThatLyricCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Decade of GuessThatLyricCommandJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setDecade(extracted_integer);
  }

void GuessThatLyricCommandJSON::fromJSONGuessedCorrectly(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field GuessedCorrectly of GuessThatLyricCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field GuessedCorrectly of GuessThatLyricCommandJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setGuessedCorrectly(extracted_integer);
  }

void GuessThatLyricCommandJSON::fromJSONHintsRemaining(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field HintsRemaining of GuessThatLyricCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field HintsRemaining of GuessThatLyricCommandJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setHintsRemaining(extracted_integer);
  }

void GuessThatLyricCommandJSON::fromJSONDifficulty(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Difficulty of GuessThatLyricCommandJSON is not a string.");
    setDifficulty(std::string(json_string->getData()));
  }

void GuessThatLyricCommandJSON::fromJSONCorrectAnswer(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CorrectAnswer of GuessThatLyricCommandJSON is not a string.");
    setCorrectAnswer(std::string(json_string->getData()));
  }

void GuessThatLyricCommandJSON::fromJSONQuestion(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Question of GuessThatLyricCommandJSON is not a string.");
    setQuestion(std::string(json_string->getData()));
  }

void GuessThatLyricCommandJSON::fromJSONSoundhoundLyricID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SoundhoundLyricID of GuessThatLyricCommandJSON is not a string.");
    setSoundhoundLyricID(std::string(json_string->getData()));
  }

void GuessThatLyricCommandJSON::fromJSONGTLSoundhoundTrackID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field GTLSoundhoundTrackID of GuessThatLyricCommandJSON is not a string.");
    setGTLSoundhoundTrackID(std::string(json_string->getData()));
  }

void GuessThatLyricCommandJSON::fromJSONCorrectTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CorrectTitle of GuessThatLyricCommandJSON is not a string.");
    setCorrectTitle(std::string(json_string->getData()));
  }

void GuessThatLyricCommandJSON::fromJSONCorrectArtist(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CorrectArtist of GuessThatLyricCommandJSON is not a string.");
    setCorrectArtist(std::string(json_string->getData()));
  }

void GuessThatLyricCommandJSON::fromJSONPlayerLost(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field PlayerLost of GuessThatLyricCommandJSON is not true for false.");
          }
      }
    setPlayerLost(the_bool);
  }

void GuessThatLyricCommandJSON::fromJSONGuessedTracksList(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field GuessedTracksList of GuessThatLyricCommandJSON is not an array.");
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

GuessThatLyricCommandJSON::GuessThatLyricCommandJSON(void) :
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
  }

GuessThatLyricCommandJSON::~GuessThatLyricCommandJSON(void)
  {
    if (flagHasGuessedTracksList)
      {
        for (size_t num4 = 0; num4 < storeGuessedTracksList.size(); ++num4)
          {
            storeGuessedTracksList[num4]->remove_reference();
          }
      }
  }

const char *GuessThatLyricCommandJSON::getMusicCommandKind(void) const
  {
    return "GuessThatLyricCommand";
  }

bool GuessThatLyricCommandJSON::hasDecade(void) const
  {
    return flagHasDecade;
  }

OInteger GuessThatLyricCommandJSON::getDecade(void)
  {
    assert(flagHasDecade);
    return storeDecade;
  }

const OInteger GuessThatLyricCommandJSON::getDecade(void) const
  {
    assert(flagHasDecade);
    return storeDecade;
  }

bool GuessThatLyricCommandJSON::hasGuessedCorrectly(void) const
  {
    return flagHasGuessedCorrectly;
  }

OInteger GuessThatLyricCommandJSON::getGuessedCorrectly(void)
  {
    assert(flagHasGuessedCorrectly);
    return storeGuessedCorrectly;
  }

const OInteger GuessThatLyricCommandJSON::getGuessedCorrectly(void) const
  {
    assert(flagHasGuessedCorrectly);
    return storeGuessedCorrectly;
  }

bool GuessThatLyricCommandJSON::hasHintsRemaining(void) const
  {
    return flagHasHintsRemaining;
  }

uint8_t GuessThatLyricCommandJSON::getHintsRemaining(void)
  {
    assert(flagHasHintsRemaining);
    return storeHintsRemaining;
  }

const uint8_t GuessThatLyricCommandJSON::getHintsRemaining(void) const
  {
    assert(flagHasHintsRemaining);
    return storeHintsRemaining;
  }

bool GuessThatLyricCommandJSON::hasDifficulty(void) const
  {
    return flagHasDifficulty;
  }

std::string GuessThatLyricCommandJSON::getDifficulty(void)
  {
    assert(flagHasDifficulty);
    return storeDifficulty;
  }

const std::string GuessThatLyricCommandJSON::getDifficulty(void) const
  {
    assert(flagHasDifficulty);
    return storeDifficulty;
  }

bool GuessThatLyricCommandJSON::hasCorrectAnswer(void) const
  {
    return flagHasCorrectAnswer;
  }

std::string GuessThatLyricCommandJSON::getCorrectAnswer(void)
  {
    assert(flagHasCorrectAnswer);
    return storeCorrectAnswer;
  }

const std::string GuessThatLyricCommandJSON::getCorrectAnswer(void) const
  {
    assert(flagHasCorrectAnswer);
    return storeCorrectAnswer;
  }

bool GuessThatLyricCommandJSON::hasQuestion(void) const
  {
    return flagHasQuestion;
  }

std::string GuessThatLyricCommandJSON::getQuestion(void)
  {
    assert(flagHasQuestion);
    return storeQuestion;
  }

const std::string GuessThatLyricCommandJSON::getQuestion(void) const
  {
    assert(flagHasQuestion);
    return storeQuestion;
  }

bool GuessThatLyricCommandJSON::hasSoundhoundLyricID(void) const
  {
    return flagHasSoundhoundLyricID;
  }

std::string GuessThatLyricCommandJSON::getSoundhoundLyricID(void)
  {
    assert(flagHasSoundhoundLyricID);
    return storeSoundhoundLyricID;
  }

const std::string GuessThatLyricCommandJSON::getSoundhoundLyricID(void) const
  {
    assert(flagHasSoundhoundLyricID);
    return storeSoundhoundLyricID;
  }

bool GuessThatLyricCommandJSON::hasGTLSoundhoundTrackID(void) const
  {
    return flagHasGTLSoundhoundTrackID;
  }

std::string GuessThatLyricCommandJSON::getGTLSoundhoundTrackID(void)
  {
    assert(flagHasGTLSoundhoundTrackID);
    return storeGTLSoundhoundTrackID;
  }

const std::string GuessThatLyricCommandJSON::getGTLSoundhoundTrackID(void) const
  {
    assert(flagHasGTLSoundhoundTrackID);
    return storeGTLSoundhoundTrackID;
  }

bool GuessThatLyricCommandJSON::hasCorrectTitle(void) const
  {
    return flagHasCorrectTitle;
  }

std::string GuessThatLyricCommandJSON::getCorrectTitle(void)
  {
    assert(flagHasCorrectTitle);
    return storeCorrectTitle;
  }

const std::string GuessThatLyricCommandJSON::getCorrectTitle(void) const
  {
    assert(flagHasCorrectTitle);
    return storeCorrectTitle;
  }

bool GuessThatLyricCommandJSON::hasCorrectArtist(void) const
  {
    return flagHasCorrectArtist;
  }

std::string GuessThatLyricCommandJSON::getCorrectArtist(void)
  {
    assert(flagHasCorrectArtist);
    return storeCorrectArtist;
  }

const std::string GuessThatLyricCommandJSON::getCorrectArtist(void) const
  {
    assert(flagHasCorrectArtist);
    return storeCorrectArtist;
  }

bool GuessThatLyricCommandJSON::hasPlayerLost(void) const
  {
    return flagHasPlayerLost;
  }

bool GuessThatLyricCommandJSON::getPlayerLost(void)
  {
    assert(flagHasPlayerLost);
    return storePlayerLost;
  }

const bool GuessThatLyricCommandJSON::getPlayerLost(void) const
  {
    assert(flagHasPlayerLost);
    return storePlayerLost;
  }

bool GuessThatLyricCommandJSON::hasGuessedTracksList(void) const
  {
    return flagHasGuessedTracksList;
  }

size_t GuessThatLyricCommandJSON::countOfGuessedTracksList(void) const
  {
    assert(flagHasGuessedTracksList);
    return storeGuessedTracksList.size();
  }

MusicTrackJSON * GuessThatLyricCommandJSON::elementOfGuessedTracksList(size_t element_num)
  {
    assert(flagHasGuessedTracksList);
    return storeGuessedTracksList[element_num];
  }

const MusicTrackJSON * GuessThatLyricCommandJSON::elementOfGuessedTracksList(size_t element_num) const
  {
    assert(flagHasGuessedTracksList);
    return storeGuessedTracksList[element_num];
  }

std::vector< MusicTrackJSON * > GuessThatLyricCommandJSON::getGuessedTracksList(void)
  {
    assert(flagHasGuessedTracksList);
    return storeGuessedTracksList;
  }

const std::vector< MusicTrackJSON * > GuessThatLyricCommandJSON::getGuessedTracksList(void) const
  {
    assert(flagHasGuessedTracksList);
    return storeGuessedTracksList;
  }

char GuessThatLyricCommandJSON::Generator::lowerBoundDecade[] = "0";
char GuessThatLyricCommandJSON::Generator::lowerBoundGuessedCorrectly[] = "0";
GuessThatLyricCommandJSON *GuessThatLyricCommandJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strncmp(key, "GuessThatLyric", 14) == 0)
      {
        switch ((unsigned char)(key[14]))
          {
            case 'G':
                if (strcmp(&(key[15]), "uessCommand") == 0)
                    return new GuessThatLyricGuessCommandJSON();
                break;
            case 'H':
                if (strcmp(&(key[15]), "intCommand") == 0)
                    return new GuessThatLyricHintCommandJSON();
                break;
            case 'N':
                if (strcmp(&(key[15]), "otUnderstoodCommand") == 0)
                    return new GuessThatLyricNotUnderstoodCommandJSON();
                break;
            case 'S':
                if (strcmp(&(key[15]), "tartGameCommand") == 0)
                    return new GuessThatLyricStartGameCommandJSON();
                break;
            default:
                break;
          }
      }

    class GenericGuessThatLyricCommandJSON : public GuessThatLyricCommandJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericGuessThatLyricCommandJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericGuessThatLyricCommandJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getGuessThatLyricCommandKind(void) const  { return key.c_str(); }
        size_t extraGuessThatLyricCommandComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraGuessThatLyricCommandComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraGuessThatLyricCommandComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraGuessThatLyricCommandComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraGuessThatLyricCommandLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraGuessThatLyricCommandLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraGuessThatLyricCommandAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraGuessThatLyricCommandSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraGuessThatLyricCommandLookup(key);
            if (old_field == NULL)
              {
                extraGuessThatLyricCommandAppendPair(key, new_component);
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
    return new GenericGuessThatLyricCommandJSON(key);
  }
GuessThatLyricCommandJSON *GuessThatLyricCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    GuessThatLyricCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<GuessThatLyricCommandJSON>, GuessThatLyricCommandJSON *, bool> generator("Type GuessThatLyricCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
