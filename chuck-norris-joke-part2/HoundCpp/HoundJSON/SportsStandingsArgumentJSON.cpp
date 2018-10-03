/* file "SportsStandingsArgumentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsStandingsArgumentJSON.h"

#include "SportsStandingsArgumentJSON.h"


SportsStandingsArgumentJSON::SportsStandingsArgumentJSON(const SportsStandingsArgumentJSON &)
  {
    assert(false);
  }

SportsStandingsArgumentJSON &SportsStandingsArgumentJSON::operator=(const SportsStandingsArgumentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsStandingsArgumentJSON::fromJSONArgumentData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeArgumentData or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            SportsStandingsArgumentWildCardJSON *convert_classy = SportsStandingsArgumentWildCardJSON::from_json(json_value, ignore_extras);
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
            SportsSeasonJSON *convert_classy = SportsSeasonJSON::from_json(json_value, ignore_extras);
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
      {
        try
          {
            SportsStandingsArgumentConferenceJSON *convert_classy = SportsStandingsArgumentConferenceJSON::from_json(json_value, ignore_extras);
            convert_classy->add_reference();
            or_result.u.choice2 = convert_classy;
            or_result.key = 2;
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
            SportsStandingsArgumentDivisionalJSON *convert_classy = SportsStandingsArgumentDivisionalJSON::from_json(json_value, ignore_extras);
            convert_classy->add_reference();
            or_result.u.choice3 = convert_classy;
            or_result.key = 3;
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
        throw("The value for field ArgumentData of SportsStandingsArgumentJSON is not one of the allowed values.");
    setArgumentData(or_result);
    switch (or_result.key)
      {
        case 0:
            or_result.u.choice0->remove_reference();
            break;
        case 1:
            or_result.u.choice1->remove_reference();
            break;
        case 2:
            or_result.u.choice2->remove_reference();
            break;
        case 3:
            or_result.u.choice3->remove_reference();
            break;
        default:
            assert(false);
      }
  }

void SportsStandingsArgumentJSON::fromJSONArgumentID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ArgumentID of SportsStandingsArgumentJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ArgumentID of SportsStandingsArgumentJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setArgumentID(extracted_integer);
  }

SportsStandingsArgumentJSON::SportsStandingsArgumentJSON(void) :
        flagHasArgumentData(false),
        flagHasArgumentID(false)
  {
    extraIndex = create_string_index();
  }

SportsStandingsArgumentJSON::~SportsStandingsArgumentJSON(void)
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
            case 2:
                storeArgumentData.u.choice2->remove_reference();
                break;
            case 3:
                storeArgumentData.u.choice3->remove_reference();
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

bool SportsStandingsArgumentJSON::hasArgumentData(void) const
  {
    return flagHasArgumentData;
  }

SportsStandingsArgumentJSON::TypeArgumentData SportsStandingsArgumentJSON::getArgumentData(void)
  {
    assert(flagHasArgumentData);
    return storeArgumentData;
  }

const SportsStandingsArgumentJSON::TypeArgumentData SportsStandingsArgumentJSON::getArgumentData(void) const
  {
    assert(flagHasArgumentData);
    return storeArgumentData;
  }

bool SportsStandingsArgumentJSON::hasArgumentID(void) const
  {
    return flagHasArgumentID;
  }

OInteger SportsStandingsArgumentJSON::getArgumentID(void)
  {
    assert(flagHasArgumentID);
    return storeArgumentID;
  }

const OInteger SportsStandingsArgumentJSON::getArgumentID(void) const
  {
    assert(flagHasArgumentID);
    return storeArgumentID;
  }

char SportsStandingsArgumentJSON::Generator::lowerBoundArgumentID[] = "0";
SportsStandingsArgumentJSON *SportsStandingsArgumentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsStandingsArgumentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsStandingsArgumentJSON>, SportsStandingsArgumentJSON *, bool> generator("Type SportsStandingsArgument", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
