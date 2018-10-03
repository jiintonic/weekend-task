/* file "SportsOlympicsEventSchedulesAndResultsArgumentRankJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsEventSchedulesAndResultsArgumentRankJSON.h"

#include "SportsOlympicsEventSchedulesAndResultsArgumentRankJSON.h"


SportsOlympicsEventSchedulesAndResultsArgumentRankJSON::SportsOlympicsEventSchedulesAndResultsArgumentRankJSON(const SportsOlympicsEventSchedulesAndResultsArgumentRankJSON &)
  {
    assert(false);
  }

SportsOlympicsEventSchedulesAndResultsArgumentRankJSON &SportsOlympicsEventSchedulesAndResultsArgumentRankJSON::operator=(const SportsOlympicsEventSchedulesAndResultsArgumentRankJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsOlympicsEventSchedulesAndResultsArgumentRankJSON::extraRankToJSON(void) const
  {
    JSONIntegerValue *generated_integer_Rank = new JSONIntegerValue(storeRank.get_o_integer());
    return generated_integer_Rank;
  }

void SportsOlympicsEventSchedulesAndResultsArgumentRankJSON::fromJSONRank(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Rank of SportsOlympicsEventSchedulesAndResultsArgumentRankJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Rank of SportsOlympicsEventSchedulesAndResultsArgumentRankJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setRank(extracted_integer);
  }

SportsOlympicsEventSchedulesAndResultsArgumentRankJSON::SportsOlympicsEventSchedulesAndResultsArgumentRankJSON(void) :
        flagHasRank(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsEventSchedulesAndResultsArgumentRankJSON::~SportsOlympicsEventSchedulesAndResultsArgumentRankJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsOlympicsEventSchedulesAndResultsArgumentRankJSON::getSportsOlympicsEventSchedulesAndResultsArgumentKind(void) const
  {
    return "Rank";
  }

bool SportsOlympicsEventSchedulesAndResultsArgumentRankJSON::hasRank(void) const
  {
    return flagHasRank;
  }

OInteger SportsOlympicsEventSchedulesAndResultsArgumentRankJSON::getRank(void)
  {
    assert(flagHasRank);
    return storeRank;
  }

const OInteger SportsOlympicsEventSchedulesAndResultsArgumentRankJSON::getRank(void) const
  {
    assert(flagHasRank);
    return storeRank;
  }

char SportsOlympicsEventSchedulesAndResultsArgumentRankJSON::Generator::lowerBoundRank[] = "1";
SportsOlympicsEventSchedulesAndResultsArgumentRankJSON *SportsOlympicsEventSchedulesAndResultsArgumentRankJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsEventSchedulesAndResultsArgumentRankJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsArgumentRankJSON>, SportsOlympicsEventSchedulesAndResultsArgumentRankJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsArgumentRank", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
