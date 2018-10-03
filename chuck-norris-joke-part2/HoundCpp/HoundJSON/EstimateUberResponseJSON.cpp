/* file "EstimateUberResponseJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "EstimateUberResponseJSON.h"

#include "EstimateUberResponseJSON.h"


EstimateUberResponseJSON::EstimateUberResponseJSON(const EstimateUberResponseJSON &)
  {
    assert(false);
  }

EstimateUberResponseJSON &EstimateUberResponseJSON::operator=(const EstimateUberResponseJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void EstimateUberResponseJSON::fromJSONprice(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberRequestEstimatePriceJSON *convert_classy = UberRequestEstimatePriceJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setprice(convert_classy);
    convert_classy->remove_reference();
  }

void EstimateUberResponseJSON::fromJSONtrip(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    Typetrip or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            UberRequestEstimateTripJSON *convert_classy = UberRequestEstimateTripJSON::from_json(json_value, ignore_extras);
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
        throw("The value for field trip of EstimateUberResponseJSON is not one of the allowed values.");
    settrip(or_result);
    switch (or_result.key)
      {
        case 0:
            or_result.u.choice0->remove_reference();
            break;
        case 1:
            break;
        default:
            assert(false);
      }
  }

void EstimateUberResponseJSON::fromJSONpickup_estimate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    Typepickup_estimate or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            const JSONRationalValue *json_rational = json_value->rational_value();
            double the_double;
            if (json_rational != NULL)
              {
                the_double = json_rational->getDouble();
              }
            else
              {
                const JSONIntegerValue *json_integer = json_value->integer_value();
                if (json_integer != NULL)
                  {
                    the_double = json_integer->getLongInt();
                  }
                else
                  {
                    throw("The value for ??? is not a number.");
                  }
              }
            or_result.u.choice0 = the_double;
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
        throw("The value for field pickup_estimate of EstimateUberResponseJSON is not one of the allowed values.");
    setpickup_estimate(or_result);
    switch (or_result.key)
      {
        case 0:
            break;
        case 1:
            break;
        default:
            assert(false);
      }
  }

EstimateUberResponseJSON::EstimateUberResponseJSON(void) :
        flagHasprice(false),
        flagHastrip(false),
        flagHaspickup_estimate(false)
  {
    extraIndex = create_string_index();
  }

EstimateUberResponseJSON::~EstimateUberResponseJSON(void)
  {
    if (flagHasprice)
      {
        storeprice->remove_reference();
      }
    if (flagHastrip)
      {
        switch (storetrip.key)
          {
            case 0:
                storetrip.u.choice0->remove_reference();
                break;
            case 1:
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

bool EstimateUberResponseJSON::hasprice(void) const
  {
    return flagHasprice;
  }

UberRequestEstimatePriceJSON * EstimateUberResponseJSON::getprice(void)
  {
    assert(flagHasprice);
    return storeprice;
  }

const UberRequestEstimatePriceJSON * EstimateUberResponseJSON::getprice(void) const
  {
    assert(flagHasprice);
    return storeprice;
  }

bool EstimateUberResponseJSON::hastrip(void) const
  {
    return flagHastrip;
  }

EstimateUberResponseJSON::Typetrip EstimateUberResponseJSON::gettrip(void)
  {
    assert(flagHastrip);
    return storetrip;
  }

const EstimateUberResponseJSON::Typetrip EstimateUberResponseJSON::gettrip(void) const
  {
    assert(flagHastrip);
    return storetrip;
  }

bool EstimateUberResponseJSON::haspickup_estimate(void) const
  {
    return flagHaspickup_estimate;
  }

EstimateUberResponseJSON::Typepickup_estimate EstimateUberResponseJSON::getpickup_estimate(void)
  {
    assert(flagHaspickup_estimate);
    return storepickup_estimate;
  }

const EstimateUberResponseJSON::Typepickup_estimate EstimateUberResponseJSON::getpickup_estimate(void) const
  {
    assert(flagHaspickup_estimate);
    return storepickup_estimate;
  }

EstimateUberResponseJSON *EstimateUberResponseJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    EstimateUberResponseJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<EstimateUberResponseJSON>, EstimateUberResponseJSON *, bool> generator("Type EstimateUberResponse", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
