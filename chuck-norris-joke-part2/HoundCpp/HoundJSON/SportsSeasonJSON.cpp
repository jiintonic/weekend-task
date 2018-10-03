/* file "SportsSeasonJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsSeasonJSON.h"

#include "SportsSeasonJSON.h"


SportsSeasonJSON::TypeArgumentType SportsSeasonJSON::stringToArgumentType(const char *chars)
  {
    if (strcmp(chars, "SportsSeason") == 0)
        return ArgumentType_SportsSeason;
    throw("The value for field `ArgumentType' is not one of the legal values.");
  }

const char *SportsSeasonJSON::stringFromArgumentType(TypeArgumentType the_enum)
  {
    switch (the_enum)
      {
        case ArgumentType_SportsSeason:
            return "SportsSeason";
        default:
            assert(false);
            return NULL;
      }
  }

SportsSeasonJSON::TypeSeasonPhrasing::TypeSeasonPhrasing(void)
  {
  }

SportsSeasonJSON::TypeSeasonPhrasing::TypeSeasonPhrasing(const TypeSeasonPhrasing &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsSeasonJSON::TypeSeasonPhrasing::TypeSeasonPhrasing(TypeSeasonPhrasingKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsSeasonJSON::TypeSeasonPhrasing::operator==(const TypeSeasonPhrasing &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsSeasonJSON::TypeSeasonPhrasing::operator!=(const TypeSeasonPhrasing &other) const
  {
    return !(operator==(other));
  }

bool SportsSeasonJSON::TypeSeasonPhrasing::operator<(const TypeSeasonPhrasing &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsSeasonJSON::TypeSeasonPhrasing::operator>(const TypeSeasonPhrasing &other) const
  {
    return other.operator<(*this);
  }

bool SportsSeasonJSON::TypeSeasonPhrasing::operator>=(const TypeSeasonPhrasing &other) const
  {
    return !(operator<(other));
  }

bool SportsSeasonJSON::TypeSeasonPhrasing::operator<=(const TypeSeasonPhrasing &other) const
  {
    return !(other.operator<(*this));
  }

SportsSeasonJSON::TypeSeasonPhrasingKnownValues SportsSeasonJSON::stringToSeasonPhrasing(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "urrentSeason") == 0)
                return SeasonPhrasing_CurrentSeason;
            break;
        case 'L':
            if (strcmp(&(chars[1]), "astSeason") == 0)
                return SeasonPhrasing_LastSeason;
            break;
        case 'Y':
            if (strcmp(&(chars[1]), "ear") == 0)
                return SeasonPhrasing_Year;
            break;
        default:
            break;
      }
    return SeasonPhrasing__none;
  }

const char *SportsSeasonJSON::stringFromSeasonPhrasing(TypeSeasonPhrasingKnownValues the_enum)
  {
    switch (the_enum)
      {
        case SeasonPhrasing_CurrentSeason:
            return "CurrentSeason";
        case SeasonPhrasing_LastSeason:
            return "LastSeason";
        case SeasonPhrasing_Year:
            return "Year";
        default:
            assert(false);
            return NULL;
      }
  }

SportsSeasonJSON::SportsSeasonJSON(const SportsSeasonJSON &)
  {
    assert(false);
  }

SportsSeasonJSON &SportsSeasonJSON::operator=(const SportsSeasonJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsSeasonJSON::fromJSONArgumentType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ArgumentType of SportsSeasonJSON is not a string.");
    if (!(strcmp(json_string->getData(), "SportsSeason") == 0))
        throw("The value for field ArgumentType of SportsSeasonJSON is not `SportsSeason'.");
    setArgumentType();
  }

void SportsSeasonJSON::fromJSONYear(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Year of SportsSeasonJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Year of SportsSeasonJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setYear(extracted_integer);
  }

void SportsSeasonJSON::fromJSONYearEnd(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field YearEnd of SportsSeasonJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field YearEnd of SportsSeasonJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setYearEnd(extracted_integer);
  }

void SportsSeasonJSON::fromJSONIsCurrentSeason(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsCurrentSeason of SportsSeasonJSON is not true for false.");
          }
      }
    setIsCurrentSeason(the_bool);
  }

void SportsSeasonJSON::fromJSONType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsSeasonTypeJSON *convert_classy = SportsSeasonTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setType(convert_classy);
    convert_classy->remove_reference();
  }

void SportsSeasonJSON::fromJSONSeasonPhrasing(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SeasonPhrasing of SportsSeasonJSON is not a string.");
    TypeSeasonPhrasing the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "urrentSeason") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = SeasonPhrasing_CurrentSeason;
                    goto open_enum_is_done;
                  }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "astSeason") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = SeasonPhrasing_LastSeason;
                    goto open_enum_is_done;
                  }
            break;
        case 'Y':
            if (strcmp(&(json_string->getData()[1]), "ear") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = SeasonPhrasing_Year;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setSeasonPhrasing(the_open_enum);
  }

SportsSeasonJSON::SportsSeasonJSON(void) :
        flagHasArgumentType(false),
        flagHasYear(false),
        flagHasYearEnd(false),
        flagHasIsCurrentSeason(false),
        flagHasType(false),
        flagHasSeasonPhrasing(false)
  {
    extraIndex = create_string_index();
  }

SportsSeasonJSON::~SportsSeasonJSON(void)
  {
    if (flagHasType)
      {
        storeType->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsSeasonJSON::hasArgumentType(void) const
  {
    return flagHasArgumentType;
  }

SportsSeasonJSON::TypeArgumentType SportsSeasonJSON::getArgumentType(void)
  {
    assert(flagHasArgumentType);
    return ArgumentType_SportsSeason;
  }

const SportsSeasonJSON::TypeArgumentType SportsSeasonJSON::getArgumentType(void) const
  {
    assert(flagHasArgumentType);
    return ArgumentType_SportsSeason;
  }

const char *SportsSeasonJSON::getArgumentTypeAsChars(void) const
  {
    return stringFromArgumentType(getArgumentType());
  }

std::string SportsSeasonJSON::getArgumentTypeAsString(void) const
  {
    return stringFromArgumentType(getArgumentType());
  }

bool SportsSeasonJSON::hasYear(void) const
  {
    return flagHasYear;
  }

OInteger SportsSeasonJSON::getYear(void)
  {
    assert(flagHasYear);
    return storeYear;
  }

const OInteger SportsSeasonJSON::getYear(void) const
  {
    assert(flagHasYear);
    return storeYear;
  }

bool SportsSeasonJSON::hasYearEnd(void) const
  {
    return flagHasYearEnd;
  }

OInteger SportsSeasonJSON::getYearEnd(void)
  {
    assert(flagHasYearEnd);
    return storeYearEnd;
  }

const OInteger SportsSeasonJSON::getYearEnd(void) const
  {
    assert(flagHasYearEnd);
    return storeYearEnd;
  }

bool SportsSeasonJSON::hasIsCurrentSeason(void) const
  {
    return flagHasIsCurrentSeason;
  }

bool SportsSeasonJSON::getIsCurrentSeason(void)
  {
    assert(flagHasIsCurrentSeason);
    return storeIsCurrentSeason;
  }

const bool SportsSeasonJSON::getIsCurrentSeason(void) const
  {
    assert(flagHasIsCurrentSeason);
    return storeIsCurrentSeason;
  }

bool SportsSeasonJSON::hasType(void) const
  {
    return flagHasType;
  }

SportsSeasonTypeJSON * SportsSeasonJSON::getType(void)
  {
    assert(flagHasType);
    return storeType;
  }

const SportsSeasonTypeJSON * SportsSeasonJSON::getType(void) const
  {
    assert(flagHasType);
    return storeType;
  }

SportsSeasonTypeJSON::TypeValue SportsSeasonJSON::getTypeValue(void)
  {
    return getType()->getValue();
  }

const SportsSeasonTypeJSON::TypeValue SportsSeasonJSON::getTypeValue(void) const
  {
    return getType()->getValue();
  }

const char *SportsSeasonJSON::getTypeAsChars(void) const
  {
    return getType()->getValueAsChars();
  }

std::string SportsSeasonJSON::getTypeAsString(void) const
  {
    return getType()->getValueAsString();
  }

bool SportsSeasonJSON::hasSeasonPhrasing(void) const
  {
    return flagHasSeasonPhrasing;
  }

SportsSeasonJSON::TypeSeasonPhrasing SportsSeasonJSON::getSeasonPhrasing(void)
  {
    assert(flagHasSeasonPhrasing);
    return storeSeasonPhrasing;
  }

const SportsSeasonJSON::TypeSeasonPhrasing SportsSeasonJSON::getSeasonPhrasing(void) const
  {
    assert(flagHasSeasonPhrasing);
    return storeSeasonPhrasing;
  }

const char *SportsSeasonJSON::getSeasonPhrasingAsChars(void) const
  {
    TypeSeasonPhrasing result = getSeasonPhrasing();
    if (result.in_known_list)
        return stringFromSeasonPhrasing(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsSeasonJSON::getSeasonPhrasingAsString(void) const
  {
    return getSeasonPhrasingAsChars();
  }

char SportsSeasonJSON::Generator::lowerBoundYear[] = "1";
char SportsSeasonJSON::Generator::lowerBoundYearEnd[] = "1";
SportsSeasonJSON *SportsSeasonJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsSeasonJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsSeasonJSON>, SportsSeasonJSON *, bool> generator("Type SportsSeason", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
