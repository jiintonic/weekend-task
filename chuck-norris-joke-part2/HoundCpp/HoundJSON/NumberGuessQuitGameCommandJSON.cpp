/* file "NumberGuessQuitGameCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "NumberGuessQuitGameCommandJSON.h"

#include "NumberGuessQuitGameCommandJSON.h"


NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::TypeDifficulty::TypeDifficulty(void)
  {
  }

NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::TypeDifficulty::TypeDifficulty(const TypeDifficulty &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::TypeDifficulty::TypeDifficulty(TypeDifficultyKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::TypeDifficulty::operator==(const TypeDifficulty &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::TypeDifficulty::operator!=(const TypeDifficulty &other) const
  {
    return !(operator==(other));
  }

bool NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::TypeDifficulty::operator<(const TypeDifficulty &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::TypeDifficulty::operator>(const TypeDifficulty &other) const
  {
    return other.operator<(*this);
  }

bool NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::TypeDifficulty::operator>=(const TypeDifficulty &other) const
  {
    return !(operator<(other));
  }

bool NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::TypeDifficulty::operator<=(const TypeDifficulty &other) const
  {
    return !(other.operator<(*this));
  }

NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::TypeDifficultyKnownValues NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::stringToDifficulty(const char *chars)
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

const char *NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::stringFromDifficulty(TypeDifficultyKnownValues the_enum)
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

NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

NumberGuessQuitGameCommandJSON::TypeNativeDataJSON &NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::fromJSONDifficulty(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Difficulty of TypeNativeDataJSON is not a string.");
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

void NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::fromJSONMinimumPossibleValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field MinimumPossibleValue of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field MinimumPossibleValue of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setMinimumPossibleValue(extracted_integer);
  }

void NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::fromJSONMaximumPossibleValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field MaximumPossibleValue of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field MaximumPossibleValue of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setMaximumPossibleValue(extracted_integer);
  }

void NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::fromJSONGuessesMade(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field GuessesMade of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field GuessesMade of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setGuessesMade(extracted_integer);
  }

NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasDifficulty(false),
        flagHasMinimumPossibleValue(false),
        flagHasMaximumPossibleValue(false),
        flagHasGuessesMade(false)
  {
    extraIndex = create_string_index();
  }

NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::hasDifficulty(void) const
  {
    return flagHasDifficulty;
  }

NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::TypeDifficulty NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::getDifficulty(void)
  {
    assert(flagHasDifficulty);
    return storeDifficulty;
  }

const NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::TypeDifficulty NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::getDifficulty(void) const
  {
    assert(flagHasDifficulty);
    return storeDifficulty;
  }

const char *NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::getDifficultyAsChars(void) const
  {
    TypeDifficulty result = getDifficulty();
    if (result.in_known_list)
        return stringFromDifficulty(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::getDifficultyAsString(void) const
  {
    return getDifficultyAsChars();
  }

bool NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::hasMinimumPossibleValue(void) const
  {
    return flagHasMinimumPossibleValue;
  }

OInteger NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::getMinimumPossibleValue(void)
  {
    assert(flagHasMinimumPossibleValue);
    return storeMinimumPossibleValue;
  }

const OInteger NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::getMinimumPossibleValue(void) const
  {
    assert(flagHasMinimumPossibleValue);
    return storeMinimumPossibleValue;
  }

bool NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::hasMaximumPossibleValue(void) const
  {
    return flagHasMaximumPossibleValue;
  }

OInteger NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::getMaximumPossibleValue(void)
  {
    assert(flagHasMaximumPossibleValue);
    return storeMaximumPossibleValue;
  }

const OInteger NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::getMaximumPossibleValue(void) const
  {
    assert(flagHasMaximumPossibleValue);
    return storeMaximumPossibleValue;
  }

bool NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::hasGuessesMade(void) const
  {
    return flagHasGuessesMade;
  }

OInteger NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::getGuessesMade(void)
  {
    assert(flagHasGuessesMade);
    return storeGuessesMade;
  }

const OInteger NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::getGuessesMade(void) const
  {
    assert(flagHasGuessesMade);
    return storeGuessesMade;
  }

NumberGuessQuitGameCommandJSON::NumberGuessQuitGameCommandJSON(const NumberGuessQuitGameCommandJSON &)
  {
    assert(false);
  }

NumberGuessQuitGameCommandJSON &NumberGuessQuitGameCommandJSON::operator=(const NumberGuessQuitGameCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *NumberGuessQuitGameCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void NumberGuessQuitGameCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

NumberGuessQuitGameCommandJSON::NumberGuessQuitGameCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

NumberGuessQuitGameCommandJSON::~NumberGuessQuitGameCommandJSON(void)
  {
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *NumberGuessQuitGameCommandJSON::getNumberGuessCommandKind(void) const
  {
    return "NumberGuessQuitCommand";
  }

bool NumberGuessQuitGameCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

NumberGuessQuitGameCommandJSON::TypeNativeDataJSON * NumberGuessQuitGameCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const NumberGuessQuitGameCommandJSON::TypeNativeDataJSON * NumberGuessQuitGameCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

char NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::Generator::lowerBoundGuessesMade[] = "1";
NumberGuessQuitGameCommandJSON::TypeNativeDataJSON *NumberGuessQuitGameCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeNativeDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
NumberGuessQuitGameCommandJSON *NumberGuessQuitGameCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    NumberGuessQuitGameCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<NumberGuessQuitGameCommandJSON>, NumberGuessQuitGameCommandJSON *, bool> generator("Type NumberGuessQuitGameCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
