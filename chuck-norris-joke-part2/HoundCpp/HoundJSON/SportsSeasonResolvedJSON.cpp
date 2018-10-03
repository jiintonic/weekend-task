/* file "SportsSeasonResolvedJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsSeasonResolvedJSON.h"

#include "SportsSeasonResolvedJSON.h"


SportsSeasonResolvedJSON::SportsSeasonResolvedJSON(const SportsSeasonResolvedJSON &)
  {
    assert(false);
  }

SportsSeasonResolvedJSON &SportsSeasonResolvedJSON::operator=(const SportsSeasonResolvedJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsSeasonResolvedJSON::fromJSONYear(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Year of SportsSeasonResolvedJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Year of SportsSeasonResolvedJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setYear(extracted_integer);
  }

void SportsSeasonResolvedJSON::fromJSONYearEnd(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field YearEnd of SportsSeasonResolvedJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field YearEnd of SportsSeasonResolvedJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setYearEnd(extracted_integer);
  }

void SportsSeasonResolvedJSON::fromJSONIsCurrentSeason(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsCurrentSeason of SportsSeasonResolvedJSON is not true for false.");
          }
      }
    setIsCurrentSeason(the_bool);
  }

void SportsSeasonResolvedJSON::fromJSONType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsSeasonTypeJSON *convert_classy = SportsSeasonTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setType(convert_classy);
    convert_classy->remove_reference();
  }

SportsSeasonResolvedJSON::SportsSeasonResolvedJSON(void) :
        flagHasYear(false),
        flagHasYearEnd(false),
        flagHasIsCurrentSeason(false),
        flagHasType(false)
  {
    extraIndex = create_string_index();
  }

SportsSeasonResolvedJSON::~SportsSeasonResolvedJSON(void)
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

bool SportsSeasonResolvedJSON::hasYear(void) const
  {
    return flagHasYear;
  }

OInteger SportsSeasonResolvedJSON::getYear(void)
  {
    assert(flagHasYear);
    return storeYear;
  }

const OInteger SportsSeasonResolvedJSON::getYear(void) const
  {
    assert(flagHasYear);
    return storeYear;
  }

bool SportsSeasonResolvedJSON::hasYearEnd(void) const
  {
    return flagHasYearEnd;
  }

OInteger SportsSeasonResolvedJSON::getYearEnd(void)
  {
    assert(flagHasYearEnd);
    return storeYearEnd;
  }

const OInteger SportsSeasonResolvedJSON::getYearEnd(void) const
  {
    assert(flagHasYearEnd);
    return storeYearEnd;
  }

bool SportsSeasonResolvedJSON::hasIsCurrentSeason(void) const
  {
    return flagHasIsCurrentSeason;
  }

bool SportsSeasonResolvedJSON::getIsCurrentSeason(void)
  {
    assert(flagHasIsCurrentSeason);
    return storeIsCurrentSeason;
  }

const bool SportsSeasonResolvedJSON::getIsCurrentSeason(void) const
  {
    assert(flagHasIsCurrentSeason);
    return storeIsCurrentSeason;
  }

bool SportsSeasonResolvedJSON::hasType(void) const
  {
    return flagHasType;
  }

SportsSeasonTypeJSON * SportsSeasonResolvedJSON::getType(void)
  {
    assert(flagHasType);
    return storeType;
  }

const SportsSeasonTypeJSON * SportsSeasonResolvedJSON::getType(void) const
  {
    assert(flagHasType);
    return storeType;
  }

SportsSeasonTypeJSON::TypeValue SportsSeasonResolvedJSON::getTypeValue(void)
  {
    return getType()->getValue();
  }

const SportsSeasonTypeJSON::TypeValue SportsSeasonResolvedJSON::getTypeValue(void) const
  {
    return getType()->getValue();
  }

const char *SportsSeasonResolvedJSON::getTypeAsChars(void) const
  {
    return getType()->getValueAsChars();
  }

std::string SportsSeasonResolvedJSON::getTypeAsString(void) const
  {
    return getType()->getValueAsString();
  }

char SportsSeasonResolvedJSON::Generator::lowerBoundYear[] = "1";
char SportsSeasonResolvedJSON::Generator::lowerBoundYearEnd[] = "1";
SportsSeasonResolvedJSON *SportsSeasonResolvedJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsSeasonResolvedJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsSeasonResolvedJSON>, SportsSeasonResolvedJSON *, bool> generator("Type SportsSeasonResolved", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
