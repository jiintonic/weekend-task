/* file "NumberGuessQuitGameInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef NUMBERGUESSQUITGAMEINFORMATIONNUGGETJSON_H
#define NUMBERGUESSQUITGAMEINFORMATIONNUGGETJSON_H

#pragma interface

#include "NumberGuessInformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class NumberGuessQuitGameInformationNuggetJSON : public NumberGuessInformationNuggetJSON
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
    bool flagHasGuessesMade;
    OInteger storeGuessesMade;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    NumberGuessQuitGameInformationNuggetJSON(const NumberGuessQuitGameInformationNuggetJSON &);
    NumberGuessQuitGameInformationNuggetJSON & operator=(const NumberGuessQuitGameInformationNuggetJSON &other);

    JSONValue * extraDifficultyToJSON(void) const;
    JSONValue * extraMinimumPossibleValueToJSON(void) const;
    JSONValue * extraMaximumPossibleValueToJSON(void) const;
    JSONValue * extraGuessesMadeToJSON(void) const;

    void  fromJSONDifficulty(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMinimumPossibleValue(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMaximumPossibleValue(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGuessesMade(JSONValue *json_value, bool ignore_extras = false);


  public:
    NumberGuessQuitGameInformationNuggetJSON(void);
    virtual ~NumberGuessQuitGameInformationNuggetJSON(void);
    const char * getNumberGuessNuggetKind(void) const;
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
    bool  hasGuessesMade(void) const;
    OInteger  getGuessesMade(void);
    const OInteger  getGuessesMade(void) const;

    virtual size_t extraNumberGuessQuitGameInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraNumberGuessQuitGameInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraNumberGuessQuitGameInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraNumberGuessQuitGameInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraNumberGuessQuitGameInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraNumberGuessQuitGameInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraNumberGuessInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasDifficulty)
            ++result;
        if (flagHasMinimumPossibleValue)
            ++result;
        if (flagHasMaximumPossibleValue)
            ++result;
        if (flagHasGuessesMade)
            ++result;
        result += extraNumberGuessQuitGameInformationNuggetComponentCount();
        return result;
      }
    const char *extraNumberGuessInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasDifficulty)
          {
            if (remainder == 0)
                return "Difficulty";
            --remainder;
          }
        if (flagHasMinimumPossibleValue)
          {
            if (remainder == 0)
                return "MinimumPossibleValue";
            --remainder;
          }
        if (flagHasMaximumPossibleValue)
          {
            if (remainder == 0)
                return "MaximumPossibleValue";
            --remainder;
          }
        if (flagHasGuessesMade)
          {
            if (remainder == 0)
                return "GuessesMade";
            --remainder;
          }
        return extraNumberGuessQuitGameInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraNumberGuessInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasDifficulty)
          {
            if (remainder == 0)
                return extraDifficultyToJSON();
            --remainder;
          }
        if (flagHasMinimumPossibleValue)
          {
            if (remainder == 0)
                return extraMinimumPossibleValueToJSON();
            --remainder;
          }
        if (flagHasMaximumPossibleValue)
          {
            if (remainder == 0)
                return extraMaximumPossibleValueToJSON();
            --remainder;
          }
        if (flagHasGuessesMade)
          {
            if (remainder == 0)
                return extraGuessesMadeToJSON();
            --remainder;
          }
        return extraNumberGuessQuitGameInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraNumberGuessInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasDifficulty)
          {
            if (remainder == 0)
                return extraDifficultyToJSON();
            --remainder;
          }
        if (flagHasMinimumPossibleValue)
          {
            if (remainder == 0)
                return extraMinimumPossibleValueToJSON();
            --remainder;
          }
        if (flagHasMaximumPossibleValue)
          {
            if (remainder == 0)
                return extraMaximumPossibleValueToJSON();
            --remainder;
          }
        if (flagHasGuessesMade)
          {
            if (remainder == 0)
                return extraGuessesMadeToJSON();
            --remainder;
          }
        return extraNumberGuessQuitGameInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraNumberGuessInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                if (strcmp(&(field_name[1]), "ifficulty") == 0)
                    return (flagHasDifficulty ? extraDifficultyToJSON() : NULL);
                break;
            case 'G':
                if (strcmp(&(field_name[1]), "uessesMade") == 0)
                    return (flagHasGuessesMade ? extraGuessesMadeToJSON() : NULL);
                break;
            case 'M':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        if (strcmp(&(field_name[2]), "ximumPossibleValue") == 0)
                            return (flagHasMaximumPossibleValue ? extraMaximumPossibleValueToJSON() : NULL);
                        break;
                    case 'i':
                        if (strcmp(&(field_name[2]), "nimumPossibleValue") == 0)
                            return (flagHasMinimumPossibleValue ? extraMinimumPossibleValueToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            default:
                break;
          }
        return extraNumberGuessQuitGameInformationNuggetLookup(field_name);
      }
    const JSONValue *extraNumberGuessInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                if (strcmp(&(field_name[1]), "ifficulty") == 0)
                    return (flagHasDifficulty ? extraDifficultyToJSON() : NULL);
                break;
            case 'G':
                if (strcmp(&(field_name[1]), "uessesMade") == 0)
                    return (flagHasGuessesMade ? extraGuessesMadeToJSON() : NULL);
                break;
            case 'M':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        if (strcmp(&(field_name[2]), "ximumPossibleValue") == 0)
                            return (flagHasMaximumPossibleValue ? extraMaximumPossibleValueToJSON() : NULL);
                        break;
                    case 'i':
                        if (strcmp(&(field_name[2]), "nimumPossibleValue") == 0)
                            return (flagHasMinimumPossibleValue ? extraMinimumPossibleValueToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            default:
                break;
          }
        return extraNumberGuessQuitGameInformationNuggetLookup(field_name);
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
    void setGuessesMade(OInteger new_value)
      {
        flagHasGuessesMade = true;
        if (new_value < 1)
            throw("The value for field GuessesMade of NumberGuessQuitGameInformationNuggetJSON is less than the lower bound (1) for that field.");
        storeGuessesMade = new_value;
      }
    void unsetGuessesMade(void)
      {
        flagHasGuessesMade = false;
      }

    virtual void extraNumberGuessQuitGameInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraNumberGuessQuitGameInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraNumberGuessQuitGameInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraNumberGuessQuitGameInformationNuggetAppendPair(key, new_component);
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
    void extraNumberGuessInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'D':
                if (strcmp(&(key[1]), "ifficulty") == 0)
                    {
                    fromJSONDifficulty(new_component, false);
                    return;
                    }
                break;
            case 'G':
                if (strcmp(&(key[1]), "uessesMade") == 0)
                    {
                    fromJSONGuessesMade(new_component, false);
                    return;
                    }
                break;
            case 'M':
                switch ((unsigned char)(key[1]))
                  {
                    case 'a':
                        if (strcmp(&(key[2]), "ximumPossibleValue") == 0)
                            {
                            fromJSONMaximumPossibleValue(new_component, false);
                            return;
                            }
                        break;
                    case 'i':
                        if (strcmp(&(key[2]), "nimumPossibleValue") == 0)
                            {
                            fromJSONMinimumPossibleValue(new_component, false);
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
        extraNumberGuessQuitGameInformationNuggetAppendPair(key, new_component);
      }
    void extraNumberGuessInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'D':
                if (strcmp(&(key[1]), "ifficulty") == 0)
                    {
                    fromJSONDifficulty(new_component, false);
                    return;
                    }
                break;
            case 'G':
                if (strcmp(&(key[1]), "uessesMade") == 0)
                    {
                    fromJSONGuessesMade(new_component, false);
                    return;
                    }
                break;
            case 'M':
                switch ((unsigned char)(key[1]))
                  {
                    case 'a':
                        if (strcmp(&(key[2]), "ximumPossibleValue") == 0)
                            {
                            fromJSONMaximumPossibleValue(new_component, false);
                            return;
                            }
                        break;
                    case 'i':
                        if (strcmp(&(key[2]), "nimumPossibleValue") == 0)
                            {
                            fromJSONMinimumPossibleValue(new_component, false);
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
        extraNumberGuessQuitGameInformationNuggetSetField(key, new_component);
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
        NumberGuessInformationNuggetJSON::write_fields_as_json(handler);
        if (flagHasDifficulty)
          {
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
          }
        if (flagHasMinimumPossibleValue)
          {
            handler->start_pair("MinimumPossibleValue");
            handler->number_value(storeMinimumPossibleValue.get_o_integer());
          }
        if (flagHasMaximumPossibleValue)
          {
            handler->start_pair("MaximumPossibleValue");
            handler->number_value(storeMaximumPossibleValue.get_o_integer());
          }
        if (flagHasGuessesMade)
          {
            handler->start_pair("GuessesMade");
            handler->number_value(storeGuessesMade.get_o_integer());
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static NumberGuessQuitGameInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static NumberGuessQuitGameInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        NumberGuessQuitGameInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<NumberGuessQuitGameInformationNuggetJSON>, NumberGuessQuitGameInformationNuggetJSON *, bool> generator("Type NumberGuessQuitGameInformationNugget", ignore_extras);
            parse_json_value(text, "Text for NumberGuessQuitGameInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static NumberGuessQuitGameInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        NumberGuessQuitGameInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<NumberGuessQuitGameInformationNuggetJSON>, NumberGuessQuitGameInformationNuggetJSON *, bool> generator("Type NumberGuessQuitGameInformationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public NumberGuessInformationNuggetJSON::Generator
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
        static char lowerBoundGuessesMade[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundGuessesMade>, OInteger, o_integer > fieldGeneratorGuessesMade;
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
            if (!(strcmp(getNumberGuessInformationNuggetJSONKey().c_str(), "NumberGuessQuitCommand") == 0))
                throw("The key field has a value other than `NumberGuessQuitCommand'.");
            NumberGuessQuitGameInformationNuggetJSON *result = new NumberGuessQuitGameInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<NumberGuessQuitGameInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraNumberGuessQuitGameInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(NumberGuessInformationNuggetJSON *new_result)
          {
            handle_result((NumberGuessQuitGameInformationNuggetJSON *)new_result);
          }
        void finish(NumberGuessQuitGameInformationNuggetJSON *result)
          {
            if (fieldGeneratorDifficulty.have_value)
              {
                result->setDifficulty(fieldGeneratorDifficulty.value);
                fieldGeneratorDifficulty.have_value = false;
              }
            if (fieldGeneratorMinimumPossibleValue.have_value)
              {
                result->setMinimumPossibleValue(fieldGeneratorMinimumPossibleValue.value);
                fieldGeneratorMinimumPossibleValue.have_value = false;
              }
            if (fieldGeneratorMaximumPossibleValue.have_value)
              {
                result->setMaximumPossibleValue(fieldGeneratorMaximumPossibleValue.value);
                fieldGeneratorMaximumPossibleValue.have_value = false;
              }
            if (fieldGeneratorGuessesMade.have_value)
              {
                result->setGuessesMade(fieldGeneratorGuessesMade.value);
                fieldGeneratorGuessesMade.have_value = false;
              }
            NumberGuessInformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(NumberGuessQuitGameInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "ifficulty") == 0)
                        return &fieldGeneratorDifficulty;
                    break;
                case 'G':
                    if (strcmp(&(field_name[1]), "uessesMade") == 0)
                        return &fieldGeneratorGuessesMade;
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
                default:
                    break;
              }
            return NumberGuessInformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : NumberGuessInformationNuggetJSON::Generator(ignore_extras), fieldGeneratorDifficulty("field \"Difficulty\" of the NumberGuessQuitGameInformationNugget class"), fieldGeneratorMinimumPossibleValue("field \"MinimumPossibleValue\" of the NumberGuessQuitGameInformationNugget class"), fieldGeneratorMaximumPossibleValue("field \"MaximumPossibleValue\" of the NumberGuessQuitGameInformationNugget class"), fieldGeneratorGuessesMade("field \"GuessesMade\" of the NumberGuessQuitGameInformationNugget class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the NumberGuessQuitGameInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorDifficulty.reset();
            fieldGeneratorMinimumPossibleValue.reset();
            fieldGeneratorMaximumPossibleValue.reset();
            fieldGeneratorGuessesMade.reset();
            NumberGuessInformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* NUMBERGUESSQUITGAMEINFORMATIONNUGGETJSON_H */
