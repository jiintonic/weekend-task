/* file "HomeAutomationSetColorCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationSetColorCommandJSON.h"

#include "HomeAutomationSetColorCommandJSON.h"


HomeAutomationSetColorCommandJSON::HomeAutomationSetColorCommandJSON(const HomeAutomationSetColorCommandJSON &)
  {
    assert(false);
  }

HomeAutomationSetColorCommandJSON &HomeAutomationSetColorCommandJSON::operator=(const HomeAutomationSetColorCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *HomeAutomationSetColorCommandJSON::extraColorToJSON(void) const
  {
    JSONValueHandler handler_Color;
    storeColor->write_as_json(&handler_Color);
    handler_Color.result->add_reference();
    return handler_Color.result;
  }

void HomeAutomationSetColorCommandJSON::fromJSONColor(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    ColorJSON *convert_classy = ColorJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setColor(convert_classy);
    convert_classy->remove_reference();
  }

HomeAutomationSetColorCommandJSON::HomeAutomationSetColorCommandJSON(void) :
        flagHasColor(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationSetColorCommandJSON::~HomeAutomationSetColorCommandJSON(void)
  {
    if (flagHasColor)
      {
        storeColor->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *HomeAutomationSetColorCommandJSON::getHomeAutomationControlCommandKind(void) const
  {
    return "HomeAutomationSetColorCommand";
  }

bool HomeAutomationSetColorCommandJSON::hasColor(void) const
  {
    return flagHasColor;
  }

ColorJSON * HomeAutomationSetColorCommandJSON::getColor(void)
  {
    assert(flagHasColor);
    return storeColor;
  }

const ColorJSON * HomeAutomationSetColorCommandJSON::getColor(void) const
  {
    assert(flagHasColor);
    return storeColor;
  }

HomeAutomationSetColorCommandJSON *HomeAutomationSetColorCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationSetColorCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationSetColorCommandJSON>, HomeAutomationSetColorCommandJSON *, bool> generator("Type HomeAutomationSetColorCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
