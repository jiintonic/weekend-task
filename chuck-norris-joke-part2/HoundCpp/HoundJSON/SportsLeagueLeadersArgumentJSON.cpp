/* file "SportsLeagueLeadersArgumentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsLeagueLeadersArgumentJSON.h"

#include "SportsLeagueLeadersArgumentJSON.h"


SportsLeagueLeadersArgumentJSON::SportsLeagueLeadersArgumentJSON(const SportsLeagueLeadersArgumentJSON &)
  {
    assert(false);
  }

SportsLeagueLeadersArgumentJSON &SportsLeagueLeadersArgumentJSON::operator=(const SportsLeagueLeadersArgumentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsLeagueLeadersArgumentJSON::fromJSONArgumentData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeArgumentData or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            SportsSeasonJSON *convert_classy = SportsSeasonJSON::from_json(json_value, ignore_extras);
            convert_classy->add_reference();
            or_result.u.choice0 = convert_classy;
            or_result.key = 0;
            or_done = true;
          }
        catch (char *e1)
          {
            free(e1);
          }
        catch (const char *e1)
          {
          }
      }
    if (!or_done)
      {
        try
          {
            SportsStatsArgumentTypeModifierJSON *convert_classy = SportsStatsArgumentTypeModifierJSON::from_json(json_value, ignore_extras);
            convert_classy->add_reference();
            or_result.u.choice1 = convert_classy;
            or_result.key = 1;
            or_done = true;
          }
        catch (char *e1)
          {
            free(e1);
          }
        catch (const char *e1)
          {
          }
      }
    if (!or_done)
        throw("The value for field ArgumentData of SportsLeagueLeadersArgumentJSON is not one of the allowed values.");
    setArgumentData(or_result);
    switch (or_result.key)
      {
        case 0:
            or_result.u.choice0->remove_reference();
            break;
        case 1:
            or_result.u.choice1->remove_reference();
            break;
        default:
            assert(false);
      }
  }

void SportsLeagueLeadersArgumentJSON::fromJSONArgumentID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ArgumentID of SportsLeagueLeadersArgumentJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ArgumentID of SportsLeagueLeadersArgumentJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setArgumentID(extracted_integer);
  }

SportsLeagueLeadersArgumentJSON::SportsLeagueLeadersArgumentJSON(void) :
        flagHasArgumentData(false),
        flagHasArgumentID(false)
  {
    extraIndex = create_string_index();
  }

SportsLeagueLeadersArgumentJSON::~SportsLeagueLeadersArgumentJSON(void)
  {
    if (flagHasArgumentData)
      {
        switch (storeArgumentData.key)
          {
            case 0:
                storeArgumentData.u.choice0->remove_reference();
                break;
            case 1:
                storeArgumentData.u.choice1->remove_reference();
                break;
            default:
                assert(false);
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsLeagueLeadersArgumentJSON::hasArgumentData(void) const
  {
    return flagHasArgumentData;
  }

SportsLeagueLeadersArgumentJSON::TypeArgumentData SportsLeagueLeadersArgumentJSON::getArgumentData(void)
  {
    assert(flagHasArgumentData);
    return storeArgumentData;
  }

const SportsLeagueLeadersArgumentJSON::TypeArgumentData SportsLeagueLeadersArgumentJSON::getArgumentData(void) const
  {
    assert(flagHasArgumentData);
    return storeArgumentData;
  }

bool SportsLeagueLeadersArgumentJSON::hasArgumentID(void) const
  {
    return flagHasArgumentID;
  }

OInteger SportsLeagueLeadersArgumentJSON::getArgumentID(void)
  {
    assert(flagHasArgumentID);
    return storeArgumentID;
  }

const OInteger SportsLeagueLeadersArgumentJSON::getArgumentID(void) const
  {
    assert(flagHasArgumentID);
    return storeArgumentID;
  }

char SportsLeagueLeadersArgumentJSON::Generator::lowerBoundArgumentID[] = "0";
SportsLeagueLeadersArgumentJSON *SportsLeagueLeadersArgumentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsLeagueLeadersArgumentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsLeagueLeadersArgumentJSON>, SportsLeagueLeadersArgumentJSON *, bool> generator("Type SportsLeagueLeadersArgument", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
