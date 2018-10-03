/* file "SportsOlympicsBasicAttributeArgumentYearJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsBasicAttributeArgumentYearJSON.h"

#include "SportsOlympicsBasicAttributeArgumentYearJSON.h"


SportsOlympicsBasicAttributeArgumentYearJSON::SportsOlympicsBasicAttributeArgumentYearJSON(const SportsOlympicsBasicAttributeArgumentYearJSON &)
  {
    assert(false);
  }

SportsOlympicsBasicAttributeArgumentYearJSON &SportsOlympicsBasicAttributeArgumentYearJSON::operator=(const SportsOlympicsBasicAttributeArgumentYearJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsOlympicsBasicAttributeArgumentYearJSON::extraYearToJSON(void) const
  {
    JSONIntegerValue *generated_integer_Year = new JSONIntegerValue(storeYear.get_o_integer());
    return generated_integer_Year;
  }

void SportsOlympicsBasicAttributeArgumentYearJSON::fromJSONYear(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Year of SportsOlympicsBasicAttributeArgumentYearJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Year of SportsOlympicsBasicAttributeArgumentYearJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setYear(extracted_integer);
  }

SportsOlympicsBasicAttributeArgumentYearJSON::SportsOlympicsBasicAttributeArgumentYearJSON(void) :
        flagHasYear(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsBasicAttributeArgumentYearJSON::~SportsOlympicsBasicAttributeArgumentYearJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsOlympicsBasicAttributeArgumentYearJSON::getSportsOlympicsBasicAttributeArgumentKind(void) const
  {
    return "Year";
  }

bool SportsOlympicsBasicAttributeArgumentYearJSON::hasYear(void) const
  {
    return flagHasYear;
  }

OInteger SportsOlympicsBasicAttributeArgumentYearJSON::getYear(void)
  {
    assert(flagHasYear);
    return storeYear;
  }

const OInteger SportsOlympicsBasicAttributeArgumentYearJSON::getYear(void) const
  {
    assert(flagHasYear);
    return storeYear;
  }

char SportsOlympicsBasicAttributeArgumentYearJSON::Generator::lowerBoundYear[] = "0";
SportsOlympicsBasicAttributeArgumentYearJSON *SportsOlympicsBasicAttributeArgumentYearJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsBasicAttributeArgumentYearJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsBasicAttributeArgumentYearJSON>, SportsOlympicsBasicAttributeArgumentYearJSON *, bool> generator("Type SportsOlympicsBasicAttributeArgumentYear", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
