/* file "SportsTeamAndRankJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsTeamAndRankJSON.h"

#include "SportsTeamAndRankJSON.h"


SportsTeamAndRankJSON::SportsTeamAndRankJSON(const SportsTeamAndRankJSON &)
  {
    assert(false);
  }

SportsTeamAndRankJSON &SportsTeamAndRankJSON::operator=(const SportsTeamAndRankJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsTeamAndRankJSON::fromJSONTeam(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsTeamNewJSON *convert_classy = SportsTeamNewJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTeam(convert_classy);
    convert_classy->remove_reference();
  }

void SportsTeamAndRankJSON::fromJSONOutcomeCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field OutcomeCount of SportsTeamAndRankJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field OutcomeCount of SportsTeamAndRankJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setOutcomeCount(extracted_integer);
  }

void SportsTeamAndRankJSON::fromJSONRank(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Rank of SportsTeamAndRankJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Rank of SportsTeamAndRankJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setRank(extracted_integer);
  }

SportsTeamAndRankJSON::SportsTeamAndRankJSON(void) :
        flagHasTeam(false),
        flagHasOutcomeCount(false),
        flagHasRank(false)
  {
    extraIndex = create_string_index();
  }

SportsTeamAndRankJSON::~SportsTeamAndRankJSON(void)
  {
    if (flagHasTeam)
      {
        storeTeam->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsTeamAndRankJSON::hasTeam(void) const
  {
    return flagHasTeam;
  }

SportsTeamNewJSON * SportsTeamAndRankJSON::getTeam(void)
  {
    assert(flagHasTeam);
    return storeTeam;
  }

const SportsTeamNewJSON * SportsTeamAndRankJSON::getTeam(void) const
  {
    assert(flagHasTeam);
    return storeTeam;
  }

bool SportsTeamAndRankJSON::hasOutcomeCount(void) const
  {
    return flagHasOutcomeCount;
  }

OInteger SportsTeamAndRankJSON::getOutcomeCount(void)
  {
    assert(flagHasOutcomeCount);
    return storeOutcomeCount;
  }

const OInteger SportsTeamAndRankJSON::getOutcomeCount(void) const
  {
    assert(flagHasOutcomeCount);
    return storeOutcomeCount;
  }

bool SportsTeamAndRankJSON::hasRank(void) const
  {
    return flagHasRank;
  }

OInteger SportsTeamAndRankJSON::getRank(void)
  {
    assert(flagHasRank);
    return storeRank;
  }

const OInteger SportsTeamAndRankJSON::getRank(void) const
  {
    assert(flagHasRank);
    return storeRank;
  }

char SportsTeamAndRankJSON::Generator::lowerBoundOutcomeCount[] = "-1";
char SportsTeamAndRankJSON::Generator::lowerBoundRank[] = "-1";
SportsTeamAndRankJSON *SportsTeamAndRankJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsTeamAndRankJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsTeamAndRankJSON>, SportsTeamAndRankJSON *, bool> generator("Type SportsTeamAndRank", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
