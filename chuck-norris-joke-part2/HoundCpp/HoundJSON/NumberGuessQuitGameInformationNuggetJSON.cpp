/* file "NumberGuessQuitGameInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "NumberGuessQuitGameInformationNuggetJSON.h"

#include "NumberGuessQuitGameInformationNuggetJSON.h"


NumberGuessQuitGameInformationNuggetJSON::TypeDifficulty::TypeDifficulty(void)
  {
  }

NumberGuessQuitGameInformationNuggetJSON::TypeDifficulty::TypeDifficulty(const TypeDifficulty &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

NumberGuessQuitGameInformationNuggetJSON::TypeDifficulty::TypeDifficulty(TypeDifficultyKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool NumberGuessQuitGameInformationNuggetJSON::TypeDifficulty::operator==(const TypeDifficulty &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool NumberGuessQuitGameInformationNuggetJSON::TypeDifficulty::operator!=(const TypeDifficulty &other) const
  {
    return !(operator==(other));
  }

bool NumberGuessQuitGameInformationNuggetJSON::TypeDifficulty::operator<(const TypeDifficulty &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool NumberGuessQuitGameInformationNuggetJSON::TypeDifficulty::operator>(const TypeDifficulty &other) const
  {
    return other.operator<(*this);
  }

bool NumberGuessQuitGameInformationNuggetJSON::TypeDifficulty::operator>=(const TypeDifficulty &other) const
  {
    return !(operator<(other));
  }

bool NumberGuessQuitGameInformationNuggetJSON::TypeDifficulty::operator<=(const TypeDifficulty &other) const
  {
    return !(other.operator<(*this));
  }

NumberGuessQuitGameInformationNuggetJSON::TypeDifficultyKnownValues NumberGuessQuitGameInformationNuggetJSON::stringToDifficulty(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'E':
            if (strcmp(&(chars[1]), "asy") == 0)
                return Difficulty_Easy;
            break;
        case 'H':
            if (strcmp(&(chars[1]), "ard") == 0)
                return Difficulty_Hard;
            break;
        default:
            break;
      }
    return Difficulty__none;
  }

const char *NumberGuessQuitGameInformationNuggetJSON::stringFromDifficulty(TypeDifficultyKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Difficulty_Easy:
            return "Easy";
        case Difficulty_Hard:
            return "Hard";
        default:
            assert(false);
            return NULL;
      }
  }

NumberGuessQuitGameInformationNuggetJSON::NumberGuessQuitGameInformationNuggetJSON(const NumberGuessQuitGameInformationNuggetJSON &)
  {
    assert(false);
  }

NumberGuessQuitGameInformationNuggetJSON &NumberGuessQuitGameInformationNuggetJSON::operator=(const NumberGuessQuitGameInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *NumberGuessQuitGameInformationNuggetJSON::extraDifficultyToJSON(void) const
  {
    JSONStringValue *generated_string_Difficulty;
    if (!(storeDifficulty.in_known_list))
      {
    generated_string_Difficulty = new JSONStringValue(storeDifficulty.string_value.c_str());
      }
    else
      {
    switch (storeDifficulty.list_value)
      {
        case Difficulty_Easy:
            generated_string_Difficulty = new JSONStringValue("Easy");
            break;
        case Difficulty_Hard:
            generated_string_Difficulty = new JSONStringValue("Hard");
            break;
        default:
            assert(false);
            generated_string_Difficulty = NULL;
      }
      }
    return generated_string_Difficulty;
  }

JSONValue *NumberGuessQuitGameInformationNuggetJSON::extraMinimumPossibleValueToJSON(void) const
  {
    JSONIntegerValue *generated_integer_MinimumPossibleValue = new JSONIntegerValue(storeMinimumPossibleValue.get_o_integer());
    return generated_integer_MinimumPossibleValue;
  }

JSONValue *NumberGuessQuitGameInformationNuggetJSON::extraMaximumPossibleValueToJSON(void) const
  {
    JSONIntegerValue *generated_integer_MaximumPossibleValue = new JSONIntegerValue(storeMaximumPossibleValue.get_o_integer());
    return generated_integer_MaximumPossibleValue;
  }

JSONValue *NumberGuessQuitGameInformationNuggetJSON::extraGuessesMadeToJSON(void) const
  {
    JSONIntegerValue *generated_integer_GuessesMade = new JSONIntegerValue(storeGuessesMade.get_o_integer());
    return generated_integer_GuessesMade;
  }

void NumberGuessQuitGameInformationNuggetJSON::fromJSONDifficulty(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Difficulty of NumberGuessQuitGameInformationNuggetJSON is not a string.");
    TypeDifficulty the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'E':
            if (strcmp(&(json_string->getData()[1]), "asy") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Difficulty_Easy;
                    goto open_enum_is_done;
                  }
            break;
        case 'H':
            if (strcmp(&(json_string->getData()[1]), "ard") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Difficulty_Hard;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setDifficulty(the_open_enum);
  }

void NumberGuessQuitGameInformationNuggetJSON::fromJSONMinimumPossibleValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field MinimumPossibleValue of NumberGuessQuitGameInformationNuggetJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field MinimumPossibleValue of NumberGuessQuitGameInformationNuggetJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setMinimumPossibleValue(extracted_integer);
  }

void NumberGuessQuitGameInformationNuggetJSON::fromJSONMaximumPossibleValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field MaximumPossibleValue of NumberGuessQuitGameInformationNuggetJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field MaximumPossibleValue of NumberGuessQuitGameInformationNuggetJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setMaximumPossibleValue(extracted_integer);
  }

void NumberGuessQuitGameInformationNuggetJSON::fromJSONGuessesMade(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field GuessesMade of NumberGuessQuitGameInformationNuggetJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field GuessesMade of NumberGuessQuitGameInformationNuggetJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setGuessesMade(extracted_integer);
  }

NumberGuessQuitGameInformationNuggetJSON::NumberGuessQuitGameInformationNuggetJSON(void) :
        flagHasDifficulty(false),
        flagHasMinimumPossibleValue(false),
        flagHasMaximumPossibleValue(false),
        flagHasGuessesMade(false)
  {
    extraIndex = create_string_index();
  }

NumberGuessQuitGameInformationNuggetJSON::~NumberGuessQuitGameInformationNuggetJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *NumberGuessQuitGameInformationNuggetJSON::getNumberGuessNuggetKind(void) const
  {
    return "NumberGuessQuitCommand";
  }

bool NumberGuessQuitGameInformationNuggetJSON::hasDifficulty(void) const
  {
    return flagHasDifficulty;
  }

NumberGuessQuitGameInformationNuggetJSON::TypeDifficulty NumberGuessQuitGameInformationNuggetJSON::getDifficulty(void)
  {
    assert(flagHasDifficulty);
    return storeDifficulty;
  }

const NumberGuessQuitGameInformationNuggetJSON::TypeDifficulty NumberGuessQuitGameInformationNuggetJSON::getDifficulty(void) const
  {
    assert(flagHasDifficulty);
    return storeDifficulty;
  }

const char *NumberGuessQuitGameInformationNuggetJSON::getDifficultyAsChars(void) const
  {
    TypeDifficulty result = getDifficulty();
    if (result.in_known_list)
        return stringFromDifficulty(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string NumberGuessQuitGameInformationNuggetJSON::getDifficultyAsString(void) const
  {
    return getDifficultyAsChars();
  }

bool NumberGuessQuitGameInformationNuggetJSON::hasMinimumPossibleValue(void) const
  {
    return flagHasMinimumPossibleValue;
  }

OInteger NumberGuessQuitGameInformationNuggetJSON::getMinimumPossibleValue(void)
  {
    assert(flagHasMinimumPossibleValue);
    return storeMinimumPossibleValue;
  }

const OInteger NumberGuessQuitGameInformationNuggetJSON::getMinimumPossibleValue(void) const
  {
    assert(flagHasMinimumPossibleValue);
    return storeMinimumPossibleValue;
  }

bool NumberGuessQuitGameInformationNuggetJSON::hasMaximumPossibleValue(void) const
  {
    return flagHasMaximumPossibleValue;
  }

OInteger NumberGuessQuitGameInformationNuggetJSON::getMaximumPossibleValue(void)
  {
    assert(flagHasMaximumPossibleValue);
    return storeMaximumPossibleValue;
  }

const OInteger NumberGuessQuitGameInformationNuggetJSON::getMaximumPossibleValue(void) const
  {
    assert(flagHasMaximumPossibleValue);
    return storeMaximumPossibleValue;
  }

bool NumberGuessQuitGameInformationNuggetJSON::hasGuessesMade(void) const
  {
    return flagHasGuessesMade;
  }

OInteger NumberGuessQuitGameInformationNuggetJSON::getGuessesMade(void)
  {
    assert(flagHasGuessesMade);
    return storeGuessesMade;
  }

const OInteger NumberGuessQuitGameInformationNuggetJSON::getGuessesMade(void) const
  {
    assert(flagHasGuessesMade);
    return storeGuessesMade;
  }

char NumberGuessQuitGameInformationNuggetJSON::Generator::lowerBoundGuessesMade[] = "1";
NumberGuessQuitGameInformationNuggetJSON *NumberGuessQuitGameInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    NumberGuessQuitGameInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<NumberGuessQuitGameInformationNuggetJSON>, NumberGuessQuitGameInformationNuggetJSON *, bool> generator("Type NumberGuessQuitGameInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
