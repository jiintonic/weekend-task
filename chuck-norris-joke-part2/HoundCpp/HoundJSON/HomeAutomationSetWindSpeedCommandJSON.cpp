/* file "HomeAutomationSetWindSpeedCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationSetWindSpeedCommandJSON.h"

#include "HomeAutomationSetWindSpeedCommandJSON.h"


HomeAutomationSetWindSpeedCommandJSON::HomeAutomationSetWindSpeedCommandJSON(const HomeAutomationSetWindSpeedCommandJSON &)
  {
    assert(false);
  }

HomeAutomationSetWindSpeedCommandJSON &HomeAutomationSetWindSpeedCommandJSON::operator=(const HomeAutomationSetWindSpeedCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *HomeAutomationSetWindSpeedCommandJSON::extraWindSpeedToJSON(void) const
  {
    JSONValue *generated_rational_WindSpeed;
    if (((double)(long int)storeWindSpeed) == storeWindSpeed)
        generated_rational_WindSpeed = new JSONIntegerValue((long int)(storeWindSpeed));
    else
        generated_rational_WindSpeed = new JSONRationalValue(storeWindSpeed, DBL_DIG);
    return generated_rational_WindSpeed;
  }

void HomeAutomationSetWindSpeedCommandJSON::fromJSONWindSpeed(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field WindSpeed of HomeAutomationSetWindSpeedCommandJSON is not a number.");
          }
      }
    setWindSpeedText(the_rational_text);
  }

HomeAutomationSetWindSpeedCommandJSON::HomeAutomationSetWindSpeedCommandJSON(void) :
        flagHasWindSpeed(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationSetWindSpeedCommandJSON::~HomeAutomationSetWindSpeedCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *HomeAutomationSetWindSpeedCommandJSON::getHomeAutomationControlCommandKind(void) const
  {
    return "HomeAutomationSetWindSpeedCommand";
  }

bool HomeAutomationSetWindSpeedCommandJSON::hasWindSpeed(void) const
  {
    return flagHasWindSpeed;
  }

double HomeAutomationSetWindSpeedCommandJSON::getWindSpeed(void)
  {
    assert(flagHasWindSpeed);
    if (textStoreWindSpeed != "")
      {
        return atof(textStoreWindSpeed.c_str());
      }
    return storeWindSpeed;
  }

const double HomeAutomationSetWindSpeedCommandJSON::getWindSpeed(void) const
  {
    assert(flagHasWindSpeed);
    if (textStoreWindSpeed != "")
      {
        return atof(textStoreWindSpeed.c_str());
      }
    return storeWindSpeed;
  }

std::string HomeAutomationSetWindSpeedCommandJSON::getWindSpeedAsText(void) const
  {
    assert(flagHasWindSpeed);
    if (textStoreWindSpeed == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeWindSpeed);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreWindSpeed);
      }
  }

HomeAutomationSetWindSpeedCommandJSON *HomeAutomationSetWindSpeedCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationSetWindSpeedCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationSetWindSpeedCommandJSON>, HomeAutomationSetWindSpeedCommandJSON *, bool> generator("Type HomeAutomationSetWindSpeedCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
