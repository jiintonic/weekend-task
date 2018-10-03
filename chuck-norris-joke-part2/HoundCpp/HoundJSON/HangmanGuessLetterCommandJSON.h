/* file "HangmanGuessLetterCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HANGMANGUESSLETTERCOMMANDJSON_H
#define HANGMANGUESSLETTERCOMMANDJSON_H

#pragma interface

#include "HangmanCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include <string>
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HangmanGuessLetterCommandJSON : public HangmanCommandJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      private:
        bool flagHasBoard;
        std::string storeBoard;
        bool flagHasSolutionLength;
        OInteger storeSolutionLength;
        bool flagHasScoreImageURL;
        std::string storeScoreImageURL;
        bool flagHasTimeElapsedSeconds;
        OInteger storeTimeElapsedSeconds;
        bool flagHasPreviousGuesses;
        std::string storePreviousGuesses;
        bool flagHasNumberIncorrectGuessesMade;
        OInteger storeNumberIncorrectGuessesMade;
        bool flagHasNumberRemainingGuesses;
        OInteger storeNumberRemainingGuesses;
        bool flagHasLastLetterGuess;
        std::string storeLastLetterGuess;
        bool flagHasLastLetterGuessFrequency;
        OInteger storeLastLetterGuessFrequency;
        bool flagHasLetterWasAlreadyGuessed;
        bool storeLetterWasAlreadyGuessed;
        bool flagHasIsGameOver;
        bool storeIsGameOver;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONBoard(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSolutionLength(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONScoreImageURL(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTimeElapsedSeconds(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONPreviousGuesses(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONNumberIncorrectGuessesMade(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONNumberRemainingGuesses(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLastLetterGuess(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLastLetterGuessFrequency(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLetterWasAlreadyGuessed(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONIsGameOver(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasBoard(void) const;
        std::string  getBoard(void);
        const std::string  getBoard(void) const;
        bool  hasSolutionLength(void) const;
        OInteger  getSolutionLength(void);
        const OInteger  getSolutionLength(void) const;
        bool  hasScoreImageURL(void) const;
        std::string  getScoreImageURL(void);
        const std::string  getScoreImageURL(void) const;
        bool  hasTimeElapsedSeconds(void) const;
        OInteger  getTimeElapsedSeconds(void);
        const OInteger  getTimeElapsedSeconds(void) const;
        bool  hasPreviousGuesses(void) const;
        std::string  getPreviousGuesses(void);
        const std::string  getPreviousGuesses(void) const;
        bool  hasNumberIncorrectGuessesMade(void) const;
        OInteger  getNumberIncorrectGuessesMade(void);
        const OInteger  getNumberIncorrectGuessesMade(void) const;
        bool  hasNumberRemainingGuesses(void) const;
        OInteger  getNumberRemainingGuesses(void);
        const OInteger  getNumberRemainingGuesses(void) const;
        bool  hasLastLetterGuess(void) const;
        std::string  getLastLetterGuess(void);
        const std::string  getLastLetterGuess(void) const;
        bool  hasLastLetterGuessFrequency(void) const;
        OInteger  getLastLetterGuessFrequency(void);
        const OInteger  getLastLetterGuessFrequency(void) const;
        bool  hasLetterWasAlreadyGuessed(void) const;
        bool  getLetterWasAlreadyGuessed(void);
        const bool  getLetterWasAlreadyGuessed(void) const;
        bool  hasIsGameOver(void) const;
        bool  getIsGameOver(void);
        const bool  getIsGameOver(void) const;

        virtual size_t extraTypeNativeDataComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeNativeDataComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeNativeDataComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeNativeDataComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeNativeDataLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeNativeDataLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setBoard(std::string new_value)
          {
            flagHasBoard = true;
            storeBoard = new_value;
          }
        void unsetBoard(void)
          {
            flagHasBoard = false;
          }
        void setSolutionLength(OInteger new_value)
          {
            flagHasSolutionLength = true;
            if (new_value < 1)
                throw("The value for field SolutionLength of TypeNativeDataJSON is less than the lower bound (1) for that field.");
            storeSolutionLength = new_value;
          }
        void unsetSolutionLength(void)
          {
            flagHasSolutionLength = false;
          }
        void setScoreImageURL(std::string new_value)
          {
            flagHasScoreImageURL = true;
            storeScoreImageURL = new_value;
          }
        void unsetScoreImageURL(void)
          {
            flagHasScoreImageURL = false;
          }
        void setTimeElapsedSeconds(OInteger new_value)
          {
            flagHasTimeElapsedSeconds = true;
            if (new_value < 0)
                throw("The value for field TimeElapsedSeconds of TypeNativeDataJSON is less than the lower bound (0) for that field.");
            storeTimeElapsedSeconds = new_value;
          }
        void unsetTimeElapsedSeconds(void)
          {
            flagHasTimeElapsedSeconds = false;
          }
        void setPreviousGuesses(std::string new_value)
          {
            flagHasPreviousGuesses = true;
            storePreviousGuesses = new_value;
          }
        void unsetPreviousGuesses(void)
          {
            flagHasPreviousGuesses = false;
          }
        void setNumberIncorrectGuessesMade(OInteger new_value)
          {
            flagHasNumberIncorrectGuessesMade = true;
            storeNumberIncorrectGuessesMade = new_value;
          }
        void unsetNumberIncorrectGuessesMade(void)
          {
            flagHasNumberIncorrectGuessesMade = false;
          }
        void setNumberRemainingGuesses(OInteger new_value)
          {
            flagHasNumberRemainingGuesses = true;
            storeNumberRemainingGuesses = new_value;
          }
        void unsetNumberRemainingGuesses(void)
          {
            flagHasNumberRemainingGuesses = false;
          }
        void setLastLetterGuess(std::string new_value)
          {
            flagHasLastLetterGuess = true;
            storeLastLetterGuess = new_value;
          }
        void unsetLastLetterGuess(void)
          {
            flagHasLastLetterGuess = false;
          }
        void setLastLetterGuessFrequency(OInteger new_value)
          {
            flagHasLastLetterGuessFrequency = true;
            if (new_value < 0)
                throw("The value for field LastLetterGuessFrequency of TypeNativeDataJSON is less than the lower bound (0) for that field.");
            storeLastLetterGuessFrequency = new_value;
          }
        void unsetLastLetterGuessFrequency(void)
          {
            flagHasLastLetterGuessFrequency = false;
          }
        void setLetterWasAlreadyGuessed(bool new_value)
          {
            flagHasLetterWasAlreadyGuessed = true;
            storeLetterWasAlreadyGuessed = new_value;
          }
        void unsetLetterWasAlreadyGuessed(void)
          {
            flagHasLetterWasAlreadyGuessed = false;
          }
        void setIsGameOver(bool new_value)
          {
            flagHasIsGameOver = true;
            storeIsGameOver = new_value;
          }
        void unsetIsGameOver(void)
          {
            flagHasIsGameOver = false;
          }

        virtual void extraTypeNativeDataAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeNativeDataSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeNativeDataLookup(key);
            if (old_field == NULL)
              {
                extraTypeNativeDataAppendPair(key, new_component);
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

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            assert(flagHasBoard);
            handler->start_pair("Board");
            handler->string_value(storeBoard);
            assert(flagHasSolutionLength);
            handler->start_pair("SolutionLength");
            handler->number_value(storeSolutionLength.get_o_integer());
            assert(flagHasScoreImageURL);
            handler->start_pair("ScoreImageURL");
            handler->string_value(storeScoreImageURL);
            assert(flagHasTimeElapsedSeconds);
            handler->start_pair("TimeElapsedSeconds");
            handler->number_value(storeTimeElapsedSeconds.get_o_integer());
            assert(flagHasPreviousGuesses);
            handler->start_pair("PreviousGuesses");
            handler->string_value(storePreviousGuesses);
            assert(flagHasNumberIncorrectGuessesMade);
            handler->start_pair("NumberIncorrectGuessesMade");
            handler->number_value(storeNumberIncorrectGuessesMade.get_o_integer());
            assert(flagHasNumberRemainingGuesses);
            handler->start_pair("NumberRemainingGuesses");
            handler->number_value(storeNumberRemainingGuesses.get_o_integer());
            assert(flagHasLastLetterGuess);
            handler->start_pair("LastLetterGuess");
            handler->string_value(storeLastLetterGuess);
            assert(flagHasLastLetterGuessFrequency);
            handler->start_pair("LastLetterGuessFrequency");
            handler->number_value(storeLastLetterGuessFrequency.get_o_integer());
            assert(flagHasLetterWasAlreadyGuessed);
            handler->start_pair("LetterWasAlreadyGuessed");
            handler->boolean_value(storeLetterWasAlreadyGuessed);
            assert(flagHasIsGameOver);
            handler->start_pair("IsGameOver");
            handler->boolean_value(storeIsGameOver);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasBoard()))
              {
                return "When parsing the object for %what%, the \"Board\" field was missing.";
              }
            if (!(hasSolutionLength()))
              {
                return "When parsing the object for %what%, the \"SolutionLength\" field was missing.";
              }
            if (!(hasScoreImageURL()))
              {
                return "When parsing the object for %what%, the \"ScoreImageURL\" field was missing.";
              }
            if (!(hasTimeElapsedSeconds()))
              {
                return "When parsing the object for %what%, the \"TimeElapsedSeconds\" field was missing.";
              }
            if (!(hasPreviousGuesses()))
              {
                return "When parsing the object for %what%, the \"PreviousGuesses\" field was missing.";
              }
            if (!(hasNumberIncorrectGuessesMade()))
              {
                return "When parsing the object for %what%, the \"NumberIncorrectGuessesMade\" field was missing.";
              }
            if (!(hasNumberRemainingGuesses()))
              {
                return "When parsing the object for %what%, the \"NumberRemainingGuesses\" field was missing.";
              }
            if (!(hasLastLetterGuess()))
              {
                return "When parsing the object for %what%, the \"LastLetterGuess\" field was missing.";
              }
            if (!(hasLastLetterGuessFrequency()))
              {
                return "When parsing the object for %what%, the \"LastLetterGuessFrequency\" field was missing.";
              }
            if (!(hasLetterWasAlreadyGuessed()))
              {
                return "When parsing the object for %what%, the \"LetterWasAlreadyGuessed\" field was missing.";
              }
            if (!(hasIsGameOver()))
              {
                return "When parsing the object for %what%, the \"IsGameOver\" field was missing.";
              }
            return NULL;
          }

        static TypeNativeDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeNativeDataJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
                parse_json_value(text, "Text for TypeNativeDataJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeNativeDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
                parse_json_value(fp, file_name, &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        class Generator : public JSONObjectGenerator
          {
          private:
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorBoard;
            static char lowerBoundSolutionLength[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundSolutionLength>, OInteger, o_integer > fieldGeneratorSolutionLength;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorScoreImageURL;
            static char lowerBoundTimeElapsedSeconds[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundTimeElapsedSeconds>, OInteger, o_integer > fieldGeneratorTimeElapsedSeconds;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPreviousGuesses;
            JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorNumberIncorrectGuessesMade;
            JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorNumberRemainingGuesses;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLastLetterGuess;
            static char lowerBoundLastLetterGuessFrequency[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundLastLetterGuessFrequency>, OInteger, o_integer > fieldGeneratorLastLetterGuessFrequency;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorLetterWasAlreadyGuessed;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsGameOver;
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
                TypeNativeDataJSON *result = new TypeNativeDataJSON();
                assert(result != NULL);
                RCHandle<TypeNativeDataJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeNativeDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeNativeDataJSON *result)
              {
                if (fieldGeneratorBoard.have_value)
                  {
                    result->setBoard(fieldGeneratorBoard.value);
                    fieldGeneratorBoard.have_value = false;
                  }
                else if (!(result->hasBoard()))
                  {
                    error("When parsing the object for %what%, the \"Board\" field was missing.");
                  }
                if (fieldGeneratorSolutionLength.have_value)
                  {
                    result->setSolutionLength(fieldGeneratorSolutionLength.value);
                    fieldGeneratorSolutionLength.have_value = false;
                  }
                else if (!(result->hasSolutionLength()))
                  {
                    error("When parsing the object for %what%, the \"SolutionLength\" field was missing.");
                  }
                if (fieldGeneratorScoreImageURL.have_value)
                  {
                    result->setScoreImageURL(fieldGeneratorScoreImageURL.value);
                    fieldGeneratorScoreImageURL.have_value = false;
                  }
                else if (!(result->hasScoreImageURL()))
                  {
                    error("When parsing the object for %what%, the \"ScoreImageURL\" field was missing.");
                  }
                if (fieldGeneratorTimeElapsedSeconds.have_value)
                  {
                    result->setTimeElapsedSeconds(fieldGeneratorTimeElapsedSeconds.value);
                    fieldGeneratorTimeElapsedSeconds.have_value = false;
                  }
                else if (!(result->hasTimeElapsedSeconds()))
                  {
                    error("When parsing the object for %what%, the \"TimeElapsedSeconds\" field was missing.");
                  }
                if (fieldGeneratorPreviousGuesses.have_value)
                  {
                    result->setPreviousGuesses(fieldGeneratorPreviousGuesses.value);
                    fieldGeneratorPreviousGuesses.have_value = false;
                  }
                else if (!(result->hasPreviousGuesses()))
                  {
                    error("When parsing the object for %what%, the \"PreviousGuesses\" field was missing.");
                  }
                if (fieldGeneratorNumberIncorrectGuessesMade.have_value)
                  {
                    result->setNumberIncorrectGuessesMade(fieldGeneratorNumberIncorrectGuessesMade.value);
                    fieldGeneratorNumberIncorrectGuessesMade.have_value = false;
                  }
                else if (!(result->hasNumberIncorrectGuessesMade()))
                  {
                    error("When parsing the object for %what%, the \"NumberIncorrectGuessesMade\" field was missing.");
                  }
                if (fieldGeneratorNumberRemainingGuesses.have_value)
                  {
                    result->setNumberRemainingGuesses(fieldGeneratorNumberRemainingGuesses.value);
                    fieldGeneratorNumberRemainingGuesses.have_value = false;
                  }
                else if (!(result->hasNumberRemainingGuesses()))
                  {
                    error("When parsing the object for %what%, the \"NumberRemainingGuesses\" field was missing.");
                  }
                if (fieldGeneratorLastLetterGuess.have_value)
                  {
                    result->setLastLetterGuess(fieldGeneratorLastLetterGuess.value);
                    fieldGeneratorLastLetterGuess.have_value = false;
                  }
                else if (!(result->hasLastLetterGuess()))
                  {
                    error("When parsing the object for %what%, the \"LastLetterGuess\" field was missing.");
                  }
                if (fieldGeneratorLastLetterGuessFrequency.have_value)
                  {
                    result->setLastLetterGuessFrequency(fieldGeneratorLastLetterGuessFrequency.value);
                    fieldGeneratorLastLetterGuessFrequency.have_value = false;
                  }
                else if (!(result->hasLastLetterGuessFrequency()))
                  {
                    error("When parsing the object for %what%, the \"LastLetterGuessFrequency\" field was missing.");
                  }
                if (fieldGeneratorLetterWasAlreadyGuessed.have_value)
                  {
                    result->setLetterWasAlreadyGuessed(fieldGeneratorLetterWasAlreadyGuessed.value);
                    fieldGeneratorLetterWasAlreadyGuessed.have_value = false;
                  }
                else if (!(result->hasLetterWasAlreadyGuessed()))
                  {
                    error("When parsing the object for %what%, the \"LetterWasAlreadyGuessed\" field was missing.");
                  }
                if (fieldGeneratorIsGameOver.have_value)
                  {
                    result->setIsGameOver(fieldGeneratorIsGameOver.value);
                    fieldGeneratorIsGameOver.have_value = false;
                  }
                else if (!(result->hasIsGameOver()))
                  {
                    error("When parsing the object for %what%, the \"IsGameOver\" field was missing.");
                  }
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'B':
                        if (strcmp(&(field_name[1]), "oard") == 0)
                            return &fieldGeneratorBoard;
                        break;
                    case 'I':
                        if (strcmp(&(field_name[1]), "sGameOver") == 0)
                            return &fieldGeneratorIsGameOver;
                        break;
                    case 'L':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'a':
                                if (strncmp(&(field_name[2]), "stLetterGuess", 13) == 0)
                                  {
                                    switch ((unsigned char)(field_name[15]))
                                      {
                                        case 0:
                                            return &fieldGeneratorLastLetterGuess;
                                        case 'F':
                                            if (strcmp(&(field_name[16]), "requency") == 0)
                                                return &fieldGeneratorLastLetterGuessFrequency;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'e':
                                if (strcmp(&(field_name[2]), "tterWasAlreadyGuessed") == 0)
                                    return &fieldGeneratorLetterWasAlreadyGuessed;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'N':
                        if (strncmp(&(field_name[1]), "umber", 5) == 0)
                          {
                            switch ((unsigned char)(field_name[6]))
                              {
                                case 'I':
                                    if (strcmp(&(field_name[7]), "ncorrectGuessesMade") == 0)
                                        return &fieldGeneratorNumberIncorrectGuessesMade;
                                    break;
                                case 'R':
                                    if (strcmp(&(field_name[7]), "emainingGuesses") == 0)
                                        return &fieldGeneratorNumberRemainingGuesses;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'P':
                        if (strcmp(&(field_name[1]), "reviousGuesses") == 0)
                            return &fieldGeneratorPreviousGuesses;
                        break;
                    case 'S':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'c':
                                if (strcmp(&(field_name[2]), "oreImageURL") == 0)
                                    return &fieldGeneratorScoreImageURL;
                                break;
                            case 'o':
                                if (strcmp(&(field_name[2]), "lutionLength") == 0)
                                    return &fieldGeneratorSolutionLength;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'T':
                        if (strcmp(&(field_name[1]), "imeElapsedSeconds") == 0)
                            return &fieldGeneratorTimeElapsedSeconds;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorBoard("field \"Board\" of the TypeNativeData class"), fieldGeneratorSolutionLength("field \"SolutionLength\" of the TypeNativeData class"), fieldGeneratorScoreImageURL("field \"ScoreImageURL\" of the TypeNativeData class"), fieldGeneratorTimeElapsedSeconds("field \"TimeElapsedSeconds\" of the TypeNativeData class"), fieldGeneratorPreviousGuesses("field \"PreviousGuesses\" of the TypeNativeData class"), fieldGeneratorNumberIncorrectGuessesMade("field \"NumberIncorrectGuessesMade\" of the TypeNativeData class"), fieldGeneratorNumberRemainingGuesses("field \"NumberRemainingGuesses\" of the TypeNativeData class"), fieldGeneratorLastLetterGuess("field \"LastLetterGuess\" of the TypeNativeData class"), fieldGeneratorLastLetterGuessFrequency("field \"LastLetterGuessFrequency\" of the TypeNativeData class"), fieldGeneratorLetterWasAlreadyGuessed("field \"LetterWasAlreadyGuessed\" of the TypeNativeData class"), fieldGeneratorIsGameOver("field \"IsGameOver\" of the TypeNativeData class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorBoard.reset();
                fieldGeneratorSolutionLength.reset();
                fieldGeneratorScoreImageURL.reset();
                fieldGeneratorTimeElapsedSeconds.reset();
                fieldGeneratorPreviousGuesses.reset();
                fieldGeneratorNumberIncorrectGuessesMade.reset();
                fieldGeneratorNumberRemainingGuesses.reset();
                fieldGeneratorLastLetterGuess.reset();
                fieldGeneratorLastLetterGuessFrequency.reset();
                fieldGeneratorLetterWasAlreadyGuessed.reset();
                fieldGeneratorIsGameOver.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasNativeData;
    TypeNativeDataJSON * storeNativeData;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HangmanGuessLetterCommandJSON(const HangmanGuessLetterCommandJSON &);
    HangmanGuessLetterCommandJSON & operator=(const HangmanGuessLetterCommandJSON &other);

    JSONValue * extraNativeDataToJSON(void) const;

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);


  public:
    HangmanGuessLetterCommandJSON(void);
    virtual ~HangmanGuessLetterCommandJSON(void);
    const char * getHangmanCommandKind(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;

    virtual size_t extraHangmanGuessLetterCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHangmanGuessLetterCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHangmanGuessLetterCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHangmanGuessLetterCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHangmanGuessLetterCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHangmanGuessLetterCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraHangmanCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasNativeData)
            ++result;
        result += extraHangmanGuessLetterCommandComponentCount();
        return result;
      }
    const char *extraHangmanCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        return extraHangmanGuessLetterCommandComponentKey(remainder);
      }
    JSONValue *extraHangmanCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraHangmanGuessLetterCommandComponentValue(remainder);
      }
    const JSONValue *extraHangmanCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraHangmanGuessLetterCommandComponentValue(remainder);
      }
    JSONValue *extraHangmanCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return extraHangmanGuessLetterCommandLookup(field_name);
      }
    const JSONValue *extraHangmanCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return extraHangmanGuessLetterCommandLookup(field_name);
      }

    void setNativeData(TypeNativeDataJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = true;
        storeNativeData = new_value;
      }
    void unsetNativeData(void)
      {
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = false;
      }

    virtual void extraHangmanGuessLetterCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHangmanGuessLetterCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHangmanGuessLetterCommandLookup(key);
        if (old_field == NULL)
          {
            extraHangmanGuessLetterCommandAppendPair(key, new_component);
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
    void extraHangmanCommandAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
        extraHangmanGuessLetterCommandAppendPair(key, new_component);
      }
    void extraHangmanCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
        extraHangmanGuessLetterCommandSetField(key, new_component);
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
        HangmanCommandJSON::write_fields_as_json(handler);
        assert(flagHasNativeData);
        handler->start_pair("NativeData");
        storeNativeData->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNativeData()))
          {
            return "When parsing the object for %what%, the \"NativeData\" field was missing.";
          }
        return NULL;
      }

    static HangmanGuessLetterCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HangmanGuessLetterCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HangmanGuessLetterCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HangmanGuessLetterCommandJSON>, HangmanGuessLetterCommandJSON *, bool> generator("Type HangmanGuessLetterCommand", ignore_extras);
            parse_json_value(text, "Text for HangmanGuessLetterCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HangmanGuessLetterCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HangmanGuessLetterCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HangmanGuessLetterCommandJSON>, HangmanGuessLetterCommandJSON *, bool> generator("Type HangmanGuessLetterCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public HangmanCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<TypeNativeDataJSON::Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool > fieldGeneratorNativeData;
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
            if (!(strcmp(getHangmanCommandJSONKey().c_str(), "HangmanGuessLetterCommand") == 0))
                throw("The key field has a value other than `HangmanGuessLetterCommand'.");
            HangmanGuessLetterCommandJSON *result = new HangmanGuessLetterCommandJSON();
            assert(result != NULL);
            RCHandle<HangmanGuessLetterCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHangmanGuessLetterCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(HangmanCommandJSON *new_result)
          {
            handle_result((HangmanGuessLetterCommandJSON *)new_result);
          }
        void finish(HangmanGuessLetterCommandJSON *result)
          {
            if (fieldGeneratorNativeData.have_value)
              {
                result->setNativeData(fieldGeneratorNativeData.value.referenced());
                fieldGeneratorNativeData.have_value = false;
              }
            else if (!(result->hasNativeData()))
              {
                error("When parsing the object for %what%, the \"NativeData\" field was missing.");
              }
            HangmanCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(HangmanGuessLetterCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "NativeData") == 0)
                return &fieldGeneratorNativeData;
            return HangmanCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : HangmanCommandJSON::Generator(ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the HangmanGuessLetterCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HangmanGuessLetterCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNativeData.reset();
            HangmanCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HANGMANGUESSLETTERCOMMANDJSON_H */
