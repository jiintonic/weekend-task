/* file "SportsTeamOrPlayerJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsTeamOrPlayerJSON.h"

#include "SportsTeamOrPlayerJSON.h"


SportsTeamOrPlayerJSON::SportsTeamOrPlayerJSON(const SportsTeamOrPlayerJSON &)
  {
    assert(false);
  }

SportsTeamOrPlayerJSON &SportsTeamOrPlayerJSON::operator=(const SportsTeamOrPlayerJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsTeamOrPlayerJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeValue or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            SportsTeamNewJSON *convert_classy = SportsTeamNewJSON::from_json(json_value, ignore_extras);
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
            SportsPlayerJSON *convert_classy = SportsPlayerJSON::from_json(json_value, ignore_extras);
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
        throw("The value for field Value of SportsTeamOrPlayerJSON is not one of the allowed values.");
    setValue(or_result);
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

SportsTeamOrPlayerJSON::SportsTeamOrPlayerJSON(void) :
        flagHasValue(false)
  {
  }

SportsTeamOrPlayerJSON::SportsTeamOrPlayerJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SportsTeamOrPlayerJSON::~SportsTeamOrPlayerJSON(void)
  {
    if (flagHasValue)
      {
        switch (storeValue.key)
          {
            case 0:
                storeValue.u.choice0->remove_reference();
                break;
            case 1:
                storeValue.u.choice1->remove_reference();
                break;
            default:
                assert(false);
          }
      }
  }

bool SportsTeamOrPlayerJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SportsTeamOrPlayerJSON::TypeValue SportsTeamOrPlayerJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SportsTeamOrPlayerJSON::TypeValue SportsTeamOrPlayerJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

SportsTeamOrPlayerJSON *SportsTeamOrPlayerJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsTeamOrPlayerJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsTeamOrPlayerJSON>, SportsTeamOrPlayerJSON *, bool> generator("Type SportsTeamOrPlayer", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
