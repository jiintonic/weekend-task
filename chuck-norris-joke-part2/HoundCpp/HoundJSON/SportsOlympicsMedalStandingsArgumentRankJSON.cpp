/* file "SportsOlympicsMedalStandingsArgumentRankJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsMedalStandingsArgumentRankJSON.h"

#include "SportsOlympicsMedalStandingsArgumentRankJSON.h"


SportsOlympicsMedalStandingsArgumentRankJSON::SportsOlympicsMedalStandingsArgumentRankJSON(const SportsOlympicsMedalStandingsArgumentRankJSON &)
  {
    assert(false);
  }

SportsOlympicsMedalStandingsArgumentRankJSON &SportsOlympicsMedalStandingsArgumentRankJSON::operator=(const SportsOlympicsMedalStandingsArgumentRankJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsOlympicsMedalStandingsArgumentRankJSON::extraRankToJSON(void) const
  {
    JSONIntegerValue *generated_integer_Rank = new JSONIntegerValue(storeRank.get_o_integer());
    return generated_integer_Rank;
  }

void SportsOlympicsMedalStandingsArgumentRankJSON::fromJSONRank(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Rank of SportsOlympicsMedalStandingsArgumentRankJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Rank of SportsOlympicsMedalStandingsArgumentRankJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setRank(extracted_integer);
  }

SportsOlympicsMedalStandingsArgumentRankJSON::SportsOlympicsMedalStandingsArgumentRankJSON(void) :
        flagHasRank(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsMedalStandingsArgumentRankJSON::~SportsOlympicsMedalStandingsArgumentRankJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsOlympicsMedalStandingsArgumentRankJSON::getSportsOlympicsMedalStandingsArgumentKind(void) const
  {
    return "Rank";
  }

bool SportsOlympicsMedalStandingsArgumentRankJSON::hasRank(void) const
  {
    return flagHasRank;
  }

OInteger SportsOlympicsMedalStandingsArgumentRankJSON::getRank(void)
  {
    assert(flagHasRank);
    return storeRank;
  }

const OInteger SportsOlympicsMedalStandingsArgumentRankJSON::getRank(void) const
  {
    assert(flagHasRank);
    return storeRank;
  }

char SportsOlympicsMedalStandingsArgumentRankJSON::Generator::lowerBoundRank[] = "1";
SportsOlympicsMedalStandingsArgumentRankJSON *SportsOlympicsMedalStandingsArgumentRankJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsMedalStandingsArgumentRankJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsArgumentRankJSON>, SportsOlympicsMedalStandingsArgumentRankJSON *, bool> generator("Type SportsOlympicsMedalStandingsArgumentRank", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
