/* file "SportsOlympicsEventSchedulesAndResultsArgumentYearJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsEventSchedulesAndResultsArgumentYearJSON.h"

#include "SportsOlympicsEventSchedulesAndResultsArgumentYearJSON.h"


SportsOlympicsEventSchedulesAndResultsArgumentYearJSON::SportsOlympicsEventSchedulesAndResultsArgumentYearJSON(const SportsOlympicsEventSchedulesAndResultsArgumentYearJSON &)
  {
    assert(false);
  }

SportsOlympicsEventSchedulesAndResultsArgumentYearJSON &SportsOlympicsEventSchedulesAndResultsArgumentYearJSON::operator=(const SportsOlympicsEventSchedulesAndResultsArgumentYearJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsOlympicsEventSchedulesAndResultsArgumentYearJSON::extraYearToJSON(void) const
  {
    JSONIntegerValue *generated_integer_Year = new JSONIntegerValue(storeYear.get_o_integer());
    return generated_integer_Year;
  }

void SportsOlympicsEventSchedulesAndResultsArgumentYearJSON::fromJSONYear(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Year of SportsOlympicsEventSchedulesAndResultsArgumentYearJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Year of SportsOlympicsEventSchedulesAndResultsArgumentYearJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setYear(extracted_integer);
  }

SportsOlympicsEventSchedulesAndResultsArgumentYearJSON::SportsOlympicsEventSchedulesAndResultsArgumentYearJSON(void) :
        flagHasYear(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsEventSchedulesAndResultsArgumentYearJSON::~SportsOlympicsEventSchedulesAndResultsArgumentYearJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsOlympicsEventSchedulesAndResultsArgumentYearJSON::getSportsOlympicsEventSchedulesAndResultsArgumentKind(void) const
  {
    return "Year";
  }

bool SportsOlympicsEventSchedulesAndResultsArgumentYearJSON::hasYear(void) const
  {
    return flagHasYear;
  }

OInteger SportsOlympicsEventSchedulesAndResultsArgumentYearJSON::getYear(void)
  {
    assert(flagHasYear);
    return storeYear;
  }

const OInteger SportsOlympicsEventSchedulesAndResultsArgumentYearJSON::getYear(void) const
  {
    assert(flagHasYear);
    return storeYear;
  }

char SportsOlympicsEventSchedulesAndResultsArgumentYearJSON::Generator::lowerBoundYear[] = "0";
SportsOlympicsEventSchedulesAndResultsArgumentYearJSON *SportsOlympicsEventSchedulesAndResultsArgumentYearJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsEventSchedulesAndResultsArgumentYearJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsArgumentYearJSON>, SportsOlympicsEventSchedulesAndResultsArgumentYearJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsArgumentYear", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
