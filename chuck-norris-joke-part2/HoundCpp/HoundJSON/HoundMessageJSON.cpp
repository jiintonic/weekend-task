/* file "HoundMessageJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HoundMessageJSON.h"

#include "HoundMessageJSON.h"


HoundMessageJSON::HoundMessageJSON(const HoundMessageJSON &)
  {
    assert(false);
  }

HoundMessageJSON &HoundMessageJSON::operator=(const HoundMessageJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HoundMessageJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeValue or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            HoundServerJSON *convert_classy = HoundServerJSON::from_json(json_value, ignore_extras);
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
            HoundPartialTranscriptJSON *convert_classy = HoundPartialTranscriptJSON::from_json(json_value, ignore_extras);
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
            HoundUpdateJSON *convert_classy = HoundUpdateJSON::from_json(json_value, ignore_extras);
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
        throw("The value for field Value of HoundMessageJSON is not one of the allowed values.");
    setValue(or_result);
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
        default:
            assert(false);
      }
  }

HoundMessageJSON::HoundMessageJSON(void) :
        flagHasValue(false)
  {
  }

HoundMessageJSON::HoundMessageJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

HoundMessageJSON::~HoundMessageJSON(void)
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
            case 2:
                storeValue.u.choice2->remove_reference();
                break;
            default:
                assert(false);
          }
      }
  }

bool HoundMessageJSON::hasValue(void) const
  {
    return flagHasValue;
  }

HoundMessageJSON::TypeValue HoundMessageJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const HoundMessageJSON::TypeValue HoundMessageJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

HoundMessageJSON *HoundMessageJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HoundMessageJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HoundMessageJSON>, HoundMessageJSON *, bool> generator("Type HoundMessage", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
