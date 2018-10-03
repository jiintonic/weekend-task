/* file "ColorJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ColorJSON.h"

#include "ColorJSON.h"


ColorJSON::ColorJSON(const ColorJSON &)
  {
    assert(false);
  }

ColorJSON &ColorJSON::operator=(const ColorJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ColorJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of ColorJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

void ColorJSON::fromJSONRed(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Red of ColorJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Red of ColorJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setRed(extracted_integer);
  }

void ColorJSON::fromJSONGreen(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Green of ColorJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Green of ColorJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setGreen(extracted_integer);
  }

void ColorJSON::fromJSONBlue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Blue of ColorJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Blue of ColorJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setBlue(extracted_integer);
  }

void ColorJSON::fromJSONHue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint16_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Hue of ColorJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Hue of ColorJSON is not an integer.");
          }
        extracted_integer = (uint16_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint16_t)(json_integer->getUnsignedLongInt())    ;
      }
    setHue(extracted_integer);
  }

void ColorJSON::fromJSONSaturation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Saturation of ColorJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Saturation of ColorJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setSaturation(extracted_integer);
  }

void ColorJSON::fromJSONBrightnessValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field BrightnessValue of ColorJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field BrightnessValue of ColorJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setBrightnessValue(extracted_integer);
  }

ColorJSON::ColorJSON(void) :
        flagHasName(false),
        flagHasRed(false),
        flagHasGreen(false),
        flagHasBlue(false),
        flagHasHue(false),
        flagHasSaturation(false),
        flagHasBrightnessValue(false)
  {
  }

ColorJSON::~ColorJSON(void)
  {
  }

bool ColorJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string ColorJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string ColorJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

bool ColorJSON::hasRed(void) const
  {
    return flagHasRed;
  }

uint8_t ColorJSON::getRed(void)
  {
    assert(flagHasRed);
    return storeRed;
  }

const uint8_t ColorJSON::getRed(void) const
  {
    assert(flagHasRed);
    return storeRed;
  }

bool ColorJSON::hasGreen(void) const
  {
    return flagHasGreen;
  }

uint8_t ColorJSON::getGreen(void)
  {
    assert(flagHasGreen);
    return storeGreen;
  }

const uint8_t ColorJSON::getGreen(void) const
  {
    assert(flagHasGreen);
    return storeGreen;
  }

bool ColorJSON::hasBlue(void) const
  {
    return flagHasBlue;
  }

uint8_t ColorJSON::getBlue(void)
  {
    assert(flagHasBlue);
    return storeBlue;
  }

const uint8_t ColorJSON::getBlue(void) const
  {
    assert(flagHasBlue);
    return storeBlue;
  }

bool ColorJSON::hasHue(void) const
  {
    return flagHasHue;
  }

uint16_t ColorJSON::getHue(void)
  {
    assert(flagHasHue);
    return storeHue;
  }

const uint16_t ColorJSON::getHue(void) const
  {
    assert(flagHasHue);
    return storeHue;
  }

bool ColorJSON::hasSaturation(void) const
  {
    return flagHasSaturation;
  }

uint8_t ColorJSON::getSaturation(void)
  {
    assert(flagHasSaturation);
    return storeSaturation;
  }

const uint8_t ColorJSON::getSaturation(void) const
  {
    assert(flagHasSaturation);
    return storeSaturation;
  }

bool ColorJSON::hasBrightnessValue(void) const
  {
    return flagHasBrightnessValue;
  }

uint8_t ColorJSON::getBrightnessValue(void)
  {
    assert(flagHasBrightnessValue);
    return storeBrightnessValue;
  }

const uint8_t ColorJSON::getBrightnessValue(void) const
  {
    assert(flagHasBrightnessValue);
    return storeBrightnessValue;
  }

ColorJSON *ColorJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ColorJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ColorJSON>, ColorJSON *, bool> generator("Type Color", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
