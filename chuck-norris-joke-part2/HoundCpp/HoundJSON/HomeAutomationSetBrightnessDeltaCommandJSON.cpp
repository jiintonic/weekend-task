/* file "HomeAutomationSetBrightnessDeltaCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationSetBrightnessDeltaCommandJSON.h"

#include "HomeAutomationSetBrightnessDeltaCommandJSON.h"


HomeAutomationSetBrightnessDeltaCommandJSON::HomeAutomationSetBrightnessDeltaCommandJSON(const HomeAutomationSetBrightnessDeltaCommandJSON &)
  {
    assert(false);
  }

HomeAutomationSetBrightnessDeltaCommandJSON &HomeAutomationSetBrightnessDeltaCommandJSON::operator=(const HomeAutomationSetBrightnessDeltaCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *HomeAutomationSetBrightnessDeltaCommandJSON::extraBrightnessDeltaToJSON(void) const
  {
    JSONValue *generated_rational_BrightnessDelta;
    if (((double)(long int)storeBrightnessDelta) == storeBrightnessDelta)
        generated_rational_BrightnessDelta = new JSONIntegerValue((long int)(storeBrightnessDelta));
    else
        generated_rational_BrightnessDelta = new JSONRationalValue(storeBrightnessDelta, DBL_DIG);
    return generated_rational_BrightnessDelta;
  }

void HomeAutomationSetBrightnessDeltaCommandJSON::fromJSONBrightnessDelta(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field BrightnessDelta of HomeAutomationSetBrightnessDeltaCommandJSON is not a number.");
          }
      }
    setBrightnessDeltaText(the_rational_text);
  }

HomeAutomationSetBrightnessDeltaCommandJSON::HomeAutomationSetBrightnessDeltaCommandJSON(void) :
        flagHasBrightnessDelta(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationSetBrightnessDeltaCommandJSON::~HomeAutomationSetBrightnessDeltaCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *HomeAutomationSetBrightnessDeltaCommandJSON::getHomeAutomationControlCommandKind(void) const
  {
    return "HomeAutomationSetBrightnessDeltaCommand";
  }

bool HomeAutomationSetBrightnessDeltaCommandJSON::hasBrightnessDelta(void) const
  {
    return flagHasBrightnessDelta;
  }

double HomeAutomationSetBrightnessDeltaCommandJSON::getBrightnessDelta(void)
  {
    assert(flagHasBrightnessDelta);
    if (textStoreBrightnessDelta != "")
      {
        return atof(textStoreBrightnessDelta.c_str());
      }
    return storeBrightnessDelta;
  }

const double HomeAutomationSetBrightnessDeltaCommandJSON::getBrightnessDelta(void) const
  {
    assert(flagHasBrightnessDelta);
    if (textStoreBrightnessDelta != "")
      {
        return atof(textStoreBrightnessDelta.c_str());
      }
    return storeBrightnessDelta;
  }

std::string HomeAutomationSetBrightnessDeltaCommandJSON::getBrightnessDeltaAsText(void) const
  {
    assert(flagHasBrightnessDelta);
    if (textStoreBrightnessDelta == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeBrightnessDelta);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreBrightnessDelta);
      }
  }

HomeAutomationSetBrightnessDeltaCommandJSON *HomeAutomationSetBrightnessDeltaCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationSetBrightnessDeltaCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationSetBrightnessDeltaCommandJSON>, HomeAutomationSetBrightnessDeltaCommandJSON *, bool> generator("Type HomeAutomationSetBrightnessDeltaCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
