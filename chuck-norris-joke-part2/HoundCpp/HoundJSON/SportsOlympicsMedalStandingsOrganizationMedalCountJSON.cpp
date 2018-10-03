/* file "SportsOlympicsMedalStandingsOrganizationMedalCountJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsMedalStandingsOrganizationMedalCountJSON.h"

#include "SportsOlympicsMedalStandingsOrganizationMedalCountJSON.h"


SportsOlympicsMedalStandingsOrganizationMedalCountJSON::SportsOlympicsMedalStandingsOrganizationMedalCountJSON(const SportsOlympicsMedalStandingsOrganizationMedalCountJSON &)
  {
    assert(false);
  }

SportsOlympicsMedalStandingsOrganizationMedalCountJSON &SportsOlympicsMedalStandingsOrganizationMedalCountJSON::operator=(const SportsOlympicsMedalStandingsOrganizationMedalCountJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsMedalStandingsOrganizationMedalCountJSON::fromJSONOrganization(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsOrganizationJSON *convert_classy = SportsOlympicsOrganizationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setOrganization(convert_classy);
    convert_classy->remove_reference();
  }

void SportsOlympicsMedalStandingsOrganizationMedalCountJSON::fromJSONGoldMedals(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field GoldMedals of SportsOlympicsMedalStandingsOrganizationMedalCountJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field GoldMedals of SportsOlympicsMedalStandingsOrganizationMedalCountJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setGoldMedals(extracted_integer);
  }

void SportsOlympicsMedalStandingsOrganizationMedalCountJSON::fromJSONSilverMedals(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field SilverMedals of SportsOlympicsMedalStandingsOrganizationMedalCountJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field SilverMedals of SportsOlympicsMedalStandingsOrganizationMedalCountJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setSilverMedals(extracted_integer);
  }

void SportsOlympicsMedalStandingsOrganizationMedalCountJSON::fromJSONBronzeMedals(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field BronzeMedals of SportsOlympicsMedalStandingsOrganizationMedalCountJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field BronzeMedals of SportsOlympicsMedalStandingsOrganizationMedalCountJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setBronzeMedals(extracted_integer);
  }

void SportsOlympicsMedalStandingsOrganizationMedalCountJSON::fromJSONTotalMedals(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field TotalMedals of SportsOlympicsMedalStandingsOrganizationMedalCountJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field TotalMedals of SportsOlympicsMedalStandingsOrganizationMedalCountJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setTotalMedals(extracted_integer);
  }

void SportsOlympicsMedalStandingsOrganizationMedalCountJSON::fromJSONRank(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Rank of SportsOlympicsMedalStandingsOrganizationMedalCountJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Rank of SportsOlympicsMedalStandingsOrganizationMedalCountJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setRank(extracted_integer);
  }

void SportsOlympicsMedalStandingsOrganizationMedalCountJSON::fromJSONRankIsTied(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field RankIsTied of SportsOlympicsMedalStandingsOrganizationMedalCountJSON is not true for false.");
          }
      }
    setRankIsTied(the_bool);
  }

SportsOlympicsMedalStandingsOrganizationMedalCountJSON::SportsOlympicsMedalStandingsOrganizationMedalCountJSON(void) :
        flagHasOrganization(false),
        flagHasGoldMedals(false),
        flagHasSilverMedals(false),
        flagHasBronzeMedals(false),
        flagHasTotalMedals(false),
        flagHasRank(false),
        flagHasRankIsTied(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsMedalStandingsOrganizationMedalCountJSON::~SportsOlympicsMedalStandingsOrganizationMedalCountJSON(void)
  {
    if (flagHasOrganization)
      {
        storeOrganization->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsMedalStandingsOrganizationMedalCountJSON::hasOrganization(void) const
  {
    return flagHasOrganization;
  }

SportsOlympicsOrganizationJSON * SportsOlympicsMedalStandingsOrganizationMedalCountJSON::getOrganization(void)
  {
    assert(flagHasOrganization);
    return storeOrganization;
  }

const SportsOlympicsOrganizationJSON * SportsOlympicsMedalStandingsOrganizationMedalCountJSON::getOrganization(void) const
  {
    assert(flagHasOrganization);
    return storeOrganization;
  }

bool SportsOlympicsMedalStandingsOrganizationMedalCountJSON::hasGoldMedals(void) const
  {
    return flagHasGoldMedals;
  }

OInteger SportsOlympicsMedalStandingsOrganizationMedalCountJSON::getGoldMedals(void)
  {
    assert(flagHasGoldMedals);
    return storeGoldMedals;
  }

const OInteger SportsOlympicsMedalStandingsOrganizationMedalCountJSON::getGoldMedals(void) const
  {
    assert(flagHasGoldMedals);
    return storeGoldMedals;
  }

bool SportsOlympicsMedalStandingsOrganizationMedalCountJSON::hasSilverMedals(void) const
  {
    return flagHasSilverMedals;
  }

OInteger SportsOlympicsMedalStandingsOrganizationMedalCountJSON::getSilverMedals(void)
  {
    assert(flagHasSilverMedals);
    return storeSilverMedals;
  }

const OInteger SportsOlympicsMedalStandingsOrganizationMedalCountJSON::getSilverMedals(void) const
  {
    assert(flagHasSilverMedals);
    return storeSilverMedals;
  }

bool SportsOlympicsMedalStandingsOrganizationMedalCountJSON::hasBronzeMedals(void) const
  {
    return flagHasBronzeMedals;
  }

OInteger SportsOlympicsMedalStandingsOrganizationMedalCountJSON::getBronzeMedals(void)
  {
    assert(flagHasBronzeMedals);
    return storeBronzeMedals;
  }

const OInteger SportsOlympicsMedalStandingsOrganizationMedalCountJSON::getBronzeMedals(void) const
  {
    assert(flagHasBronzeMedals);
    return storeBronzeMedals;
  }

bool SportsOlympicsMedalStandingsOrganizationMedalCountJSON::hasTotalMedals(void) const
  {
    return flagHasTotalMedals;
  }

OInteger SportsOlympicsMedalStandingsOrganizationMedalCountJSON::getTotalMedals(void)
  {
    assert(flagHasTotalMedals);
    return storeTotalMedals;
  }

const OInteger SportsOlympicsMedalStandingsOrganizationMedalCountJSON::getTotalMedals(void) const
  {
    assert(flagHasTotalMedals);
    return storeTotalMedals;
  }

bool SportsOlympicsMedalStandingsOrganizationMedalCountJSON::hasRank(void) const
  {
    return flagHasRank;
  }

OInteger SportsOlympicsMedalStandingsOrganizationMedalCountJSON::getRank(void)
  {
    assert(flagHasRank);
    return storeRank;
  }

const OInteger SportsOlympicsMedalStandingsOrganizationMedalCountJSON::getRank(void) const
  {
    assert(flagHasRank);
    return storeRank;
  }

bool SportsOlympicsMedalStandingsOrganizationMedalCountJSON::hasRankIsTied(void) const
  {
    return flagHasRankIsTied;
  }

bool SportsOlympicsMedalStandingsOrganizationMedalCountJSON::getRankIsTied(void)
  {
    assert(flagHasRankIsTied);
    return storeRankIsTied;
  }

const bool SportsOlympicsMedalStandingsOrganizationMedalCountJSON::getRankIsTied(void) const
  {
    assert(flagHasRankIsTied);
    return storeRankIsTied;
  }

char SportsOlympicsMedalStandingsOrganizationMedalCountJSON::Generator::lowerBoundGoldMedals[] = "0";
char SportsOlympicsMedalStandingsOrganizationMedalCountJSON::Generator::lowerBoundSilverMedals[] = "0";
char SportsOlympicsMedalStandingsOrganizationMedalCountJSON::Generator::lowerBoundBronzeMedals[] = "0";
char SportsOlympicsMedalStandingsOrganizationMedalCountJSON::Generator::lowerBoundTotalMedals[] = "0";
char SportsOlympicsMedalStandingsOrganizationMedalCountJSON::Generator::lowerBoundRank[] = "1";
SportsOlympicsMedalStandingsOrganizationMedalCountJSON *SportsOlympicsMedalStandingsOrganizationMedalCountJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsMedalStandingsOrganizationMedalCountJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsOrganizationMedalCountJSON>, SportsOlympicsMedalStandingsOrganizationMedalCountJSON *, bool> generator("Type SportsOlympicsMedalStandingsOrganizationMedalCount", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
