/* file "SportsOlympicsMedalStandingsArgumentYearJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsMedalStandingsArgumentYearJSON.h"

#include "SportsOlympicsMedalStandingsArgumentYearJSON.h"


SportsOlympicsMedalStandingsArgumentYearJSON::SportsOlympicsMedalStandingsArgumentYearJSON(const SportsOlympicsMedalStandingsArgumentYearJSON &)
  {
    assert(false);
  }

SportsOlympicsMedalStandingsArgumentYearJSON &SportsOlympicsMedalStandingsArgumentYearJSON::operator=(const SportsOlympicsMedalStandingsArgumentYearJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsOlympicsMedalStandingsArgumentYearJSON::extraYearToJSON(void) const
  {
    JSONIntegerValue *generated_integer_Year = new JSONIntegerValue(storeYear.get_o_integer());
    return generated_integer_Year;
  }

void SportsOlympicsMedalStandingsArgumentYearJSON::fromJSONYear(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Year of SportsOlympicsMedalStandingsArgumentYearJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Year of SportsOlympicsMedalStandingsArgumentYearJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setYear(extracted_integer);
  }

SportsOlympicsMedalStandingsArgumentYearJSON::SportsOlympicsMedalStandingsArgumentYearJSON(void) :
        flagHasYear(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsMedalStandingsArgumentYearJSON::~SportsOlympicsMedalStandingsArgumentYearJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsOlympicsMedalStandingsArgumentYearJSON::getSportsOlympicsMedalStandingsArgumentKind(void) const
  {
    return "Year";
  }

bool SportsOlympicsMedalStandingsArgumentYearJSON::hasYear(void) const
  {
    return flagHasYear;
  }

OInteger SportsOlympicsMedalStandingsArgumentYearJSON::getYear(void)
  {
    assert(flagHasYear);
    return storeYear;
  }

const OInteger SportsOlympicsMedalStandingsArgumentYearJSON::getYear(void) const
  {
    assert(flagHasYear);
    return storeYear;
  }

char SportsOlympicsMedalStandingsArgumentYearJSON::Generator::lowerBoundYear[] = "0";
SportsOlympicsMedalStandingsArgumentYearJSON *SportsOlympicsMedalStandingsArgumentYearJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsMedalStandingsArgumentYearJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsArgumentYearJSON>, SportsOlympicsMedalStandingsArgumentYearJSON *, bool> generator("Type SportsOlympicsMedalStandingsArgumentYear", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
