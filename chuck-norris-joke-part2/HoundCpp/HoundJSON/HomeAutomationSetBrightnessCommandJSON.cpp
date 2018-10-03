/* file "HomeAutomationSetBrightnessCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationSetBrightnessCommandJSON.h"

#include "HomeAutomationSetBrightnessCommandJSON.h"


HomeAutomationSetBrightnessCommandJSON::HomeAutomationSetBrightnessCommandJSON(const HomeAutomationSetBrightnessCommandJSON &)
  {
    assert(false);
  }

HomeAutomationSetBrightnessCommandJSON &HomeAutomationSetBrightnessCommandJSON::operator=(const HomeAutomationSetBrightnessCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *HomeAutomationSetBrightnessCommandJSON::extraBrightnessToJSON(void) const
  {
    JSONValue *generated_rational_Brightness;
    if (((double)(long int)storeBrightness) == storeBrightness)
        generated_rational_Brightness = new JSONIntegerValue((long int)(storeBrightness));
    else
        generated_rational_Brightness = new JSONRationalValue(storeBrightness, DBL_DIG);
    return generated_rational_Brightness;
  }

void HomeAutomationSetBrightnessCommandJSON::fromJSONBrightness(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Brightness of HomeAutomationSetBrightnessCommandJSON is not a number.");
          }
      }
    setBrightnessText(the_rational_text);
  }

HomeAutomationSetBrightnessCommandJSON::HomeAutomationSetBrightnessCommandJSON(void) :
        flagHasBrightness(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationSetBrightnessCommandJSON::~HomeAutomationSetBrightnessCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *HomeAutomationSetBrightnessCommandJSON::getHomeAutomationControlCommandKind(void) const
  {
    return "HomeAutomationSetBrightnessCommand";
  }

bool HomeAutomationSetBrightnessCommandJSON::hasBrightness(void) const
  {
    return flagHasBrightness;
  }

double HomeAutomationSetBrightnessCommandJSON::getBrightness(void)
  {
    assert(flagHasBrightness);
    if (textStoreBrightness != "")
      {
        return atof(textStoreBrightness.c_str());
      }
    return storeBrightness;
  }

const double HomeAutomationSetBrightnessCommandJSON::getBrightness(void) const
  {
    assert(flagHasBrightness);
    if (textStoreBrightness != "")
      {
        return atof(textStoreBrightness.c_str());
      }
    return storeBrightness;
  }

std::string HomeAutomationSetBrightnessCommandJSON::getBrightnessAsText(void) const
  {
    assert(flagHasBrightness);
    if (textStoreBrightness == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeBrightness);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreBrightness);
      }
  }

HomeAutomationSetBrightnessCommandJSON *HomeAutomationSetBrightnessCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationSetBrightnessCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationSetBrightnessCommandJSON>, HomeAutomationSetBrightnessCommandJSON *, bool> generator("Type HomeAutomationSetBrightnessCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
