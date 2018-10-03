/* file "NumberGuessGuessNumberCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef NUMBERGUESSGUESSNUMBERCOMMANDJSON_H
#define NUMBERGUESSGUESSNUMBERCOMMANDJSON_H

#pragma interface

#include "NumberGuessCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONIntegerRangeGenerator.h"
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


class NumberGuessGuessNumberCommandJSON : public NumberGuessCommandJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      public:
        enum TypeDifficultyKnownValues
          {
            Difficulty_Easy,
            Difficulty_Hard,
            Difficulty__none
          };
        struct TypeDifficulty
          {
            bool in_known_list;
            std::string string_value;
            TypeDifficultyKnownValues list_value;

            TypeDifficulty(void);
            TypeDifficulty(const TypeDifficulty &other);
            TypeDifficulty(TypeDifficultyKnownValues other);
            bool  operator==(const TypeDifficulty &other) const;
            bool  operator!=(const TypeDifficulty &other) const;
            bool  operator<(const TypeDifficulty &other) const;
            bool  operator>(const TypeDifficulty &other) const;
            bool  operator>=(const TypeDifficulty &other) const;
            bool  operator<=(const TypeDifficulty &other) const;

          };

        static TypeDifficultyKnownValues  stringToDifficulty(const char *chars);
        static const char * stringFromDifficulty(TypeDifficultyKnownValues the_enum);

      private:
        bool flagHasDifficulty;
        TypeDifficulty storeDifficulty;
        bool flagHasMinimumPossibleValue;
        OInteger storeMinimumPossibleValue;
        bool flagHasMaximumPossibleValue;
        OInteger storeMaximumPossibleValue;
        bool flagHasLowerRangeHint;
        OInteger storeLowerRangeHint;
        bool flagHasHigherRangeHint;
        OInteger storeHigherRangeHint;
        bool flagHasGameState;
        std::string storeGameState;
        bool flagHasGuessesMade;
        OInteger storeGuessesMade;
        bool flagHasLastGuess;
        OInteger storeLastGuess;
        bool flagHasGuessToSolutionComparison;
        OInteger storeGuessToSolutionComparison;
        bool flagHasRoundOver;
        bool storeRoundOver;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONDifficulty(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONMinimumPossibleValue(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONMaximumPossibleValue(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLowerRangeHint(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONHigherRangeHint(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONGameState(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONGuessesMade(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLastGuess(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONGuessToSolutionComparison(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONRoundOver(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasDifficulty(void) const;
        TypeDifficulty  getDifficulty(void);
        const TypeDifficulty  getDifficulty(void) const;
        const char * getDifficultyAsChars(void) const;
        std::string  getDifficultyAsString(void) const;
        bool  hasMinimumPossibleValue(void) const;
        OInteger  getMinimumPossibleValue(void);
        const OInteger  getMinimumPossibleValue(void) const;
        bool  hasMaximumPossibleValue(void) const;
        OInteger  getMaximumPossibleValue(void);
        const OInteger  getMaximumPossibleValue(void) const;
        bool  hasLowerRangeHint(void) const;
        OInteger  getLowerRangeHint(void);
        const OInteger  getLowerRangeHint(void) const;
        bool  hasHigherRangeHint(void) const;
        OInteger  getHigherRangeHint(void);
        const OInteger  getHigherRangeHint(void) const;
        bool  hasGameState(void) const;
        std::string  getGameState(void);
        const std::string  getGameState(void) const;
        bool  hasGuessesMade(void) const;
        OInteger  getGuessesMade(void);
        const OInteger  getGuessesMade(void) const;
        bool  hasLastGuess(void) const;
        OInteger  getLastGuess(void);
        const OInteger  getLastGuess(void) const;
        bool  hasGuessToSolutionComparison(void) const;
        OInteger  getGuessToSolutionComparison(void);
        const OInteger  getGuessToSolutionComparison(void) const;
        bool  hasRoundOver(void) const;
        bool  getRoundOver(void);
        const bool  getRoundOver(void) const;

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

        void setDifficulty(TypeDifficulty new_value)
          {
            flagHasDifficulty = true;
            storeDifficulty = new_value;
          }
        void setDifficulty(const char *chars)
          {
            TypeDifficultyKnownValues known = stringToDifficulty(chars);
            TypeDifficulty new_value;
            if (known == Difficulty__none)
              {
                new_value.in_known_list = false;
                new_value.string_value = chars;
              }
            else
              {
                new_value.in_known_list = true;
                new_value.list_value = known;
              }
            setDifficulty(new_value);
          }
        void setDifficulty(std::string the_string)
          {
            setDifficulty(the_string.c_str());
          }
        void setDifficulty(TypeDifficultyKnownValues new_value)
          {
            TypeDifficulty new_full_value;
            assert(new_value != Difficulty__none);
            new_full_value.in_known_list = true;
            new_full_value.list_value = new_value;
            setDifficulty(new_full_value);
          }
        void unsetDifficulty(void)
          {
            flagHasDifficulty = false;
          }
        void setMinimumPossibleValue(OInteger new_value)
          {
            flagHasMinimumPossibleValue = true;
            storeMinimumPossibleValue = new_value;
          }
        void unsetMinimumPossibleValue(void)
          {
            flagHasMinimumPossibleValue = false;
          }
        void setMaximumPossibleValue(OInteger new_value)
          {
            flagHasMaximumPossibleValue = true;
            storeMaximumPossibleValue = new_value;
          }
        void unsetMaximumPossibleValue(void)
          {
            flagHasMaximumPossibleValue = false;
          }
        void setLowerRangeHint(OInteger new_value)
          {
            flagHasLowerRangeHint = true;
            storeLowerRangeHint = new_value;
          }
        void unsetLowerRangeHint(void)
          {
            flagHasLowerRangeHint = false;
          }
        void setHigherRangeHint(OInteger new_value)
          {
            flagHasHigherRangeHint = true;
            storeHigherRangeHint = new_value;
          }
        void unsetHigherRangeHint(void)
          {
            flagHasHigherRangeHint = false;
          }
        void setGameState(std::string new_value)
          {
            flagHasGameState = true;
            storeGameState = new_value;
          }
        void unsetGameState(void)
          {
            flagHasGameState = false;
          }
        void setGuessesMade(OInteger new_value)
          {
            flagHasGuessesMade = true;
            if (new_value < 1)
                throw("The value for field GuessesMade of TypeNativeDataJSON is less than the lower bound (1) for that field.");
            storeGuessesMade = new_value;
          }
        void unsetGuessesMade(void)
          {
            flagHasGuessesMade = false;
          }
        void setLastGuess(OInteger new_value)
          {
            flagHasLastGuess = true;
            storeLastGuess = new_value;
          }
        void unsetLastGuess(void)
          {
            flagHasLastGuess = false;
          }
        void setGuessToSolutionComparison(OInteger new_value)
          {
            flagHasGuessToSolutionComparison = true;
            if (new_value < -1)
                throw("The value for field GuessToSolutionComparison of TypeNativeDataJSON is less than the lower bound (-1) for that field.");
            if (new_value > 1)
                throw("The value for field GuessToSolutionComparison of TypeNativeDataJSON is greater than the upper bound (1) for that field.");
            storeGuessToSolutionComparison = new_value;
          }
        void unsetGuessToSolutionComparison(void)
          {
            flagHasGuessToSolutionComparison = false;
          }
        void setRoundOver(bool new_value)
          {
            flagHasRoundOver = true;
            storeRoundOver = new_value;
          }
        void unsetRoundOver(void)
          {
            flagHasRoundOver = false;
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
            assert(flagHasDifficulty);
            handler->start_pair("Difficulty");
            if (storeDifficulty.in_known_list)
              {
                switch (storeDifficulty.list_value)
                  {
                    case Difficulty_Easy:
                        handler->string_value("Easy");
                        break;
                    case Difficulty_Hard:
                        handler->string_value("Hard");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeDifficulty.string_value);
              }
            assert(flagHasMinimumPossibleValue);
            handler->start_pair("MinimumPossibleValue");
            handler->number_value(storeMinimumPossibleValue.get_o_integer());
            assert(flagHasMaximumPossibleValue);
            handler->start_pair("MaximumPossibleValue");
            handler->number_value(storeMaximumPossibleValue.get_o_integer());
            assert(flagHasLowerRangeHint);
            handler->start_pair("LowerRangeHint");
            handler->number_value(storeLowerRangeHint.get_o_integer());
            assert(flagHasHigherRangeHint);
            handler->start_pair("HigherRangeHint");
            handler->number_value(storeHigherRangeHint.get_o_integer());
            assert(flagHasGameState);
            handler->start_pair("GameState");
            handler->string_value(storeGameState);
            assert(flagHasGuessesMade);
            handler->start_pair("GuessesMade");
            handler->number_value(storeGuessesMade.get_o_integer());
            assert(flagHasLastGuess);
            handler->start_pair("LastGuess");
            handler->number_value(storeLastGuess.get_o_integer());
            assert(flagHasGuessToSolutionComparison);
            handler->start_pair("GuessToSolutionComparison");
            handler->number_value(storeGuessToSolutionComparison.get_o_integer());
            assert(flagHasRoundOver);
            handler->start_pair("RoundOver");
            handler->boolean_value(storeRoundOver);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasDifficulty()))
              {
                return "When parsing the object for %what%, the \"Difficulty\" field was missing.";
              }
            if (!(hasMinimumPossibleValue()))
              {
                return "When parsing the object for %what%, the \"MinimumPossibleValue\" field was missing.";
              }
            if (!(hasMaximumPossibleValue()))
              {
                return "When parsing the object for %what%, the \"MaximumPossibleValue\" field was missing.";
              }
            if (!(hasLowerRangeHint()))
              {
                return "When parsing the object for %what%, the \"LowerRangeHint\" field was missing.";
              }
            if (!(hasHigherRangeHint()))
              {
                return "When parsing the object for %what%, the \"HigherRangeHint\" field was missing.";
              }
            if (!(hasGameState()))
              {
                return "When parsing the object for %what%, the \"GameState\" field was missing.";
              }
            if (!(hasGuessesMade()))
              {
                return "When parsing the object for %what%, the \"GuessesMade\" field was missing.";
              }
            if (!(hasLastGuess()))
              {
                return "When parsing the object for %what%, the \"LastGuess\" field was missing.";
              }
            if (!(hasGuessToSolutionComparison()))
              {
                return "When parsing the object for %what%, the \"GuessToSolutionComparison\" field was missing.";
              }
            if (!(hasRoundOver()))
              {
                return "When parsing the object for %what%, the \"RoundOver\" field was missing.";
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
        class FieldGeneratorDifficulty : public JSONStringGenerator
              {
              protected:
                FieldGeneratorDifficulty(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorDifficulty(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    TypeDifficultyKnownValues known = stringToDifficulty(result);
                    TypeDifficulty new_value;
                    if (known == Difficulty__none)
                      {
                        new_value.in_known_list = false;
                        new_value.string_value = result;
                      }
                    else
                      {
                        new_value.in_known_list = true;
                        new_value.list_value = known;
                      }
                    handle_result(new_value);
                  }
                virtual void handle_result(TypeDifficulty result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorDifficulty, TypeDifficulty, TypeDifficulty > fieldGeneratorDifficulty;
            JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorMinimumPossibleValue;
            JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorMaximumPossibleValue;
            JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorLowerRangeHint;
            JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorHigherRangeHint;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorGameState;
            static char lowerBoundGuessesMade[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundGuessesMade>, OInteger, o_integer > fieldGeneratorGuessesMade;
            JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorLastGuess;
            static char lowerBoundGuessToSolutionComparison[];
            static char upperBoundGuessToSolutionComparison[];
            JSONHoldingGenerator<JSONIntegerBigRangeGenerator<lowerBoundGuessToSolutionComparison, upperBoundGuessToSolutionComparison>, OInteger, o_integer > fieldGeneratorGuessToSolutionComparison;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorRoundOver;
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
                if (fieldGeneratorDifficulty.have_value)
                  {
                    result->setDifficulty(fieldGeneratorDifficulty.value);
                    fieldGeneratorDifficulty.have_value = false;
                  }
                else if (!(result->hasDifficulty()))
                  {
                    error("When parsing the object for %what%, the \"Difficulty\" field was missing.");
                  }
                if (fieldGeneratorMinimumPossibleValue.have_value)
                  {
                    result->setMinimumPossibleValue(fieldGeneratorMinimumPossibleValue.value);
                    fieldGeneratorMinimumPossibleValue.have_value = false;
                  }
                else if (!(result->hasMinimumPossibleValue()))
                  {
                    error("When parsing the object for %what%, the \"MinimumPossibleValue\" field was missing.");
                  }
                if (fieldGeneratorMaximumPossibleValue.have_value)
                  {
                    result->setMaximumPossibleValue(fieldGeneratorMaximumPossibleValue.value);
                    fieldGeneratorMaximumPossibleValue.have_value = false;
                  }
                else if (!(result->hasMaximumPossibleValue()))
                  {
                    error("When parsing the object for %what%, the \"MaximumPossibleValue\" field was missing.");
                  }
                if (fieldGeneratorLowerRangeHint.have_value)
                  {
                    result->setLowerRangeHint(fieldGeneratorLowerRangeHint.value);
                    fieldGeneratorLowerRangeHint.have_value = false;
                  }
                else if (!(result->hasLowerRangeHint()))
                  {
                    error("When parsing the object for %what%, the \"LowerRangeHint\" field was missing.");
                  }
                if (fieldGeneratorHigherRangeHint.have_value)
                  {
                    result->setHigherRangeHint(fieldGeneratorHigherRangeHint.value);
                    fieldGeneratorHigherRangeHint.have_value = false;
                  }
                else if (!(result->hasHigherRangeHint()))
                  {
                    error("When parsing the object for %what%, the \"HigherRangeHint\" field was missing.");
                  }
                if (fieldGeneratorGameState.have_value)
                  {
                    result->setGameState(fieldGeneratorGameState.value);
                    fieldGeneratorGameState.have_value = false;
                  }
                else if (!(result->hasGameState()))
                  {
                    error("When parsing the object for %what%, the \"GameState\" field was missing.");
                  }
                if (fieldGeneratorGuessesMade.have_value)
                  {
                    result->setGuessesMade(fieldGeneratorGuessesMade.value);
                    fieldGeneratorGuessesMade.have_value = false;
                  }
                else if (!(result->hasGuessesMade()))
                  {
                    error("When parsing the object for %what%, the \"GuessesMade\" field was missing.");
                  }
                if (fieldGeneratorLastGuess.have_value)
                  {
                    result->setLastGuess(fieldGeneratorLastGuess.value);
                    fieldGeneratorLastGuess.have_value = false;
                  }
                else if (!(result->hasLastGuess()))
                  {
                    error("When parsing the object for %what%, the \"LastGuess\" field was missing.");
                  }
                if (fieldGeneratorGuessToSolutionComparison.have_value)
                  {
                    result->setGuessToSolutionComparison(fieldGeneratorGuessToSolutionComparison.value);
                    fieldGeneratorGuessToSolutionComparison.have_value = false;
                  }
                else if (!(result->hasGuessToSolutionComparison()))
                  {
                    error("When parsing the object for %what%, the \"GuessToSolutionComparison\" field was missing.");
                  }
                if (fieldGeneratorRoundOver.have_value)
                  {
                    result->setRoundOver(fieldGeneratorRoundOver.value);
                    fieldGeneratorRoundOver.have_value = false;
                  }
                else if (!(result->hasRoundOver()))
                  {
                    error("When parsing the object for %what%, the \"RoundOver\" field was missing.");
                  }
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'D':
                        if (strcmp(&(field_name[1]), "ifficulty") == 0)
                            return &fieldGeneratorDifficulty;
                        break;
                    case 'G':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'a':
                                if (strcmp(&(field_name[2]), "meState") == 0)
                                    return &fieldGeneratorGameState;
                                break;
                            case 'u':
                                if (strncmp(&(field_name[2]), "ess", 3) == 0)
                                  {
                                    switch ((unsigned char)(field_name[5]))
                                      {
                                        case 'T':
                                            if (strcmp(&(field_name[6]), "oSolutionComparison") == 0)
                                                return &fieldGeneratorGuessToSolutionComparison;
                                            break;
                                        case 'e':
                                            if (strcmp(&(field_name[6]), "sMade") == 0)
                                                return &fieldGeneratorGuessesMade;
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
                        if (strcmp(&(field_name[1]), "igherRangeHint") == 0)
                            return &fieldGeneratorHigherRangeHint;
                        break;
                    case 'L':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'a':
                                if (strcmp(&(field_name[2]), "stGuess") == 0)
                                    return &fieldGeneratorLastGuess;
                                break;
                            case 'o':
                                if (strcmp(&(field_name[2]), "werRangeHint") == 0)
                                    return &fieldGeneratorLowerRangeHint;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'M':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'a':
                                if (strcmp(&(field_name[2]), "ximumPossibleValue") == 0)
                                    return &fieldGeneratorMaximumPossibleValue;
                                break;
                            case 'i':
                                if (strcmp(&(field_name[2]), "nimumPossibleValue") == 0)
                                    return &fieldGeneratorMinimumPossibleValue;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'R':
                        if (strcmp(&(field_name[1]), "oundOver") == 0)
                            return &fieldGeneratorRoundOver;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorDifficulty("field \"Difficulty\" of the TypeNativeData class"), fieldGeneratorMinimumPossibleValue("field \"MinimumPossibleValue\" of the TypeNativeData class"), fieldGeneratorMaximumPossibleValue("field \"MaximumPossibleValue\" of the TypeNativeData class"), fieldGeneratorLowerRangeHint("field \"LowerRangeHint\" of the TypeNativeData class"), fieldGeneratorHigherRangeHint("field \"HigherRangeHint\" of the TypeNativeData class"), fieldGeneratorGameState("field \"GameState\" of the TypeNativeData class"), fieldGeneratorGuessesMade("field \"GuessesMade\" of the TypeNativeData class"), fieldGeneratorLastGuess("field \"LastGuess\" of the TypeNativeData class"), fieldGeneratorGuessToSolutionComparison("field \"GuessToSolutionComparison\" of the TypeNativeData class"), fieldGeneratorRoundOver("field \"RoundOver\" of the TypeNativeData class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorDifficulty.reset();
                fieldGeneratorMinimumPossibleValue.reset();
                fieldGeneratorMaximumPossibleValue.reset();
                fieldGeneratorLowerRangeHint.reset();
                fieldGeneratorHigherRangeHint.reset();
                fieldGeneratorGameState.reset();
                fieldGeneratorGuessesMade.reset();
                fieldGeneratorLastGuess.reset();
                fieldGeneratorGuessToSolutionComparison.reset();
                fieldGeneratorRoundOver.reset();
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

    NumberGuessGuessNumberCommandJSON(const NumberGuessGuessNumberCommandJSON &);
    NumberGuessGuessNumberCommandJSON & operator=(const NumberGuessGuessNumberCommandJSON &other);

    JSONValue * extraNativeDataToJSON(void) const;

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);


  public:
    NumberGuessGuessNumberCommandJSON(void);
    virtual ~NumberGuessGuessNumberCommandJSON(void);
    const char * getNumberGuessCommandKind(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;

    virtual size_t extraNumberGuessGuessNumberCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraNumberGuessGuessNumberCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraNumberGuessGuessNumberCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraNumberGuessGuessNumberCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraNumberGuessGuessNumberCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraNumberGuessGuessNumberCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraNumberGuessCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasNativeData)
            ++result;
        result += extraNumberGuessGuessNumberCommandComponentCount();
        return result;
      }
    const char *extraNumberGuessCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        return extraNumberGuessGuessNumberCommandComponentKey(remainder);
      }
    JSONValue *extraNumberGuessCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraNumberGuessGuessNumberCommandComponentValue(remainder);
      }
    const JSONValue *extraNumberGuessCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraNumberGuessGuessNumberCommandComponentValue(remainder);
      }
    JSONValue *extraNumberGuessCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return extraNumberGuessGuessNumberCommandLookup(field_name);
      }
    const JSONValue *extraNumberGuessCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return extraNumberGuessGuessNumberCommandLookup(field_name);
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

    virtual void extraNumberGuessGuessNumberCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraNumberGuessGuessNumberCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraNumberGuessGuessNumberCommandLookup(key);
        if (old_field == NULL)
          {
            extraNumberGuessGuessNumberCommandAppendPair(key, new_component);
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
    void extraNumberGuessCommandAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
        extraNumberGuessGuessNumberCommandAppendPair(key, new_component);
      }
    void extraNumberGuessCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
        extraNumberGuessGuessNumberCommandSetField(key, new_component);
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
        NumberGuessCommandJSON::write_fields_as_json(handler);
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

    static NumberGuessGuessNumberCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static NumberGuessGuessNumberCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        NumberGuessGuessNumberCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<NumberGuessGuessNumberCommandJSON>, NumberGuessGuessNumberCommandJSON *, bool> generator("Type NumberGuessGuessNumberCommand", ignore_extras);
            parse_json_value(text, "Text for NumberGuessGuessNumberCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static NumberGuessGuessNumberCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        NumberGuessGuessNumberCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<NumberGuessGuessNumberCommandJSON>, NumberGuessGuessNumberCommandJSON *, bool> generator("Type NumberGuessGuessNumberCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public NumberGuessCommandJSON::Generator
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
            if (!(strcmp(getNumberGuessCommandJSONKey().c_str(), "NumberGuessGuessNumberCommand") == 0))
                throw("The key field has a value other than `NumberGuessGuessNumberCommand'.");
            NumberGuessGuessNumberCommandJSON *result = new NumberGuessGuessNumberCommandJSON();
            assert(result != NULL);
            RCHandle<NumberGuessGuessNumberCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraNumberGuessGuessNumberCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(NumberGuessCommandJSON *new_result)
          {
            handle_result((NumberGuessGuessNumberCommandJSON *)new_result);
          }
        void finish(NumberGuessGuessNumberCommandJSON *result)
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
            NumberGuessCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(NumberGuessGuessNumberCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "NativeData") == 0)
                return &fieldGeneratorNativeData;
            return NumberGuessCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : NumberGuessCommandJSON::Generator(ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the NumberGuessGuessNumberCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the NumberGuessGuessNumberCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNativeData.reset();
            NumberGuessCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* NUMBERGUESSGUESSNUMBERCOMMANDJSON_H */
