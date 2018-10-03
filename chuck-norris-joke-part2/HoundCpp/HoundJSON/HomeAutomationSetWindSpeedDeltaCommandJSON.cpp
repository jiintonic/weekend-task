/* file "HomeAutomationSetWindSpeedDeltaCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationSetWindSpeedDeltaCommandJSON.h"

#include "HomeAutomationSetWindSpeedDeltaCommandJSON.h"


HomeAutomationSetWindSpeedDeltaCommandJSON::HomeAutomationSetWindSpeedDeltaCommandJSON(const HomeAutomationSetWindSpeedDeltaCommandJSON &)
  {
    assert(false);
  }

HomeAutomationSetWindSpeedDeltaCommandJSON &HomeAutomationSetWindSpeedDeltaCommandJSON::operator=(const HomeAutomationSetWindSpeedDeltaCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *HomeAutomationSetWindSpeedDeltaCommandJSON::extraWindSpeedDeltaToJSON(void) const
  {
    JSONValue *generated_rational_WindSpeedDelta;
    if (((double)(long int)storeWindSpeedDelta) == storeWindSpeedDelta)
        generated_rational_WindSpeedDelta = new JSONIntegerValue((long int)(storeWindSpeedDelta));
    else
        generated_rational_WindSpeedDelta = new JSONRationalValue(storeWindSpeedDelta, DBL_DIG);
    return generated_rational_WindSpeedDelta;
  }

void HomeAutomationSetWindSpeedDeltaCommandJSON::fromJSONWindSpeedDelta(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field WindSpeedDelta of HomeAutomationSetWindSpeedDeltaCommandJSON is not a number.");
          }
      }
    setWindSpeedDeltaText(the_rational_text);
  }

HomeAutomationSetWindSpeedDeltaCommandJSON::HomeAutomationSetWindSpeedDeltaCommandJSON(void) :
        flagHasWindSpeedDelta(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationSetWindSpeedDeltaCommandJSON::~HomeAutomationSetWindSpeedDeltaCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *HomeAutomationSetWindSpeedDeltaCommandJSON::getHomeAutomationControlCommandKind(void) const
  {
    return "HomeAutomationSetWindSpeedDeltaCommand";
  }

bool HomeAutomationSetWindSpeedDeltaCommandJSON::hasWindSpeedDelta(void) const
  {
    return flagHasWindSpeedDelta;
  }

double HomeAutomationSetWindSpeedDeltaCommandJSON::getWindSpeedDelta(void)
  {
    assert(flagHasWindSpeedDelta);
    if (textStoreWindSpeedDelta != "")
      {
        return atof(textStoreWindSpeedDelta.c_str());
      }
    return storeWindSpeedDelta;
  }

const double HomeAutomationSetWindSpeedDeltaCommandJSON::getWindSpeedDelta(void) const
  {
    assert(flagHasWindSpeedDelta);
    if (textStoreWindSpeedDelta != "")
      {
        return atof(textStoreWindSpeedDelta.c_str());
      }
    return storeWindSpeedDelta;
  }

std::string HomeAutomationSetWindSpeedDeltaCommandJSON::getWindSpeedDeltaAsText(void) const
  {
    assert(flagHasWindSpeedDelta);
    if (textStoreWindSpeedDelta == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeWindSpeedDelta);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreWindSpeedDelta);
      }
  }

HomeAutomationSetWindSpeedDeltaCommandJSON *HomeAutomationSetWindSpeedDeltaCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationSetWindSpeedDeltaCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationSetWindSpeedDeltaCommandJSON>, HomeAutomationSetWindSpeedDeltaCommandJSON *, bool> generator("Type HomeAutomationSetWindSpeedDeltaCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
