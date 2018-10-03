/* file "HomeAutomationTemperatureJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationTemperatureJSON.h"

#include "HomeAutomationTemperatureJSON.h"


HomeAutomationTemperatureJSON::TypeUnit HomeAutomationTemperatureJSON::stringToUnit(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "elsius") == 0)
                return Unit_Celsius;
            break;
        case 'D':
            if (strcmp(&(chars[1]), "efault") == 0)
                return Unit_Default;
            break;
        case 'F':
            if (strcmp(&(chars[1]), "ahrenheit") == 0)
                return Unit_Fahrenheit;
            break;
        case 'K':
            if (strcmp(&(chars[1]), "elvin") == 0)
                return Unit_Kelvin;
            break;
        default:
            break;
      }
    throw("The value for field `Unit' is not one of the legal values.");
  }

const char *HomeAutomationTemperatureJSON::stringFromUnit(TypeUnit the_enum)
  {
    switch (the_enum)
      {
        case Unit_Default:
            return "Default";
        case Unit_Fahrenheit:
            return "Fahrenheit";
        case Unit_Celsius:
            return "Celsius";
        case Unit_Kelvin:
            return "Kelvin";
        default:
            assert(false);
            return NULL;
      }
  }

HomeAutomationTemperatureJSON::HomeAutomationTemperatureJSON(const HomeAutomationTemperatureJSON &)
  {
    assert(false);
  }

HomeAutomationTemperatureJSON &HomeAutomationTemperatureJSON::operator=(const HomeAutomationTemperatureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HomeAutomationTemperatureJSON::fromJSONTemperature(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Temperature of HomeAutomationTemperatureJSON is not a number.");
          }
      }
    setTemperatureText(the_rational_text);
  }

void HomeAutomationTemperatureJSON::fromJSONUnit(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Unit of HomeAutomationTemperatureJSON is not a string.");
    TypeUnit the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "elsius") == 0)
                  {
                    the_enum = Unit_Celsius;
                    goto enum_is_done;
                  }
            break;
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "efault") == 0)
                  {
                    the_enum = Unit_Default;
                    goto enum_is_done;
                  }
            break;
        case 'F':
            if (strcmp(&(json_string->getData()[1]), "ahrenheit") == 0)
                  {
                    the_enum = Unit_Fahrenheit;
                    goto enum_is_done;
                  }
            break;
        case 'K':
            if (strcmp(&(json_string->getData()[1]), "elvin") == 0)
                  {
                    the_enum = Unit_Kelvin;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Unit of HomeAutomationTemperatureJSON is not one of the legal strings.");
  enum_is_done:;
    setUnit(the_enum);
  }

HomeAutomationTemperatureJSON::HomeAutomationTemperatureJSON(void) :
        flagHasTemperature(false),
        flagHasUnit(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationTemperatureJSON::~HomeAutomationTemperatureJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HomeAutomationTemperatureJSON::hasTemperature(void) const
  {
    return flagHasTemperature;
  }

double HomeAutomationTemperatureJSON::getTemperature(void)
  {
    assert(flagHasTemperature);
    if (textStoreTemperature != "")
      {
        return atof(textStoreTemperature.c_str());
      }
    return storeTemperature;
  }

const double HomeAutomationTemperatureJSON::getTemperature(void) const
  {
    assert(flagHasTemperature);
    if (textStoreTemperature != "")
      {
        return atof(textStoreTemperature.c_str());
      }
    return storeTemperature;
  }

std::string HomeAutomationTemperatureJSON::getTemperatureAsText(void) const
  {
    assert(flagHasTemperature);
    if (textStoreTemperature == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeTemperature);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreTemperature);
      }
  }

bool HomeAutomationTemperatureJSON::hasUnit(void) const
  {
    return flagHasUnit;
  }

HomeAutomationTemperatureJSON::TypeUnit HomeAutomationTemperatureJSON::getUnit(void)
  {
    assert(flagHasUnit);
    return storeUnit;
  }

const HomeAutomationTemperatureJSON::TypeUnit HomeAutomationTemperatureJSON::getUnit(void) const
  {
    assert(flagHasUnit);
    return storeUnit;
  }

const char *HomeAutomationTemperatureJSON::getUnitAsChars(void) const
  {
    return stringFromUnit(getUnit());
  }

std::string HomeAutomationTemperatureJSON::getUnitAsString(void) const
  {
    return stringFromUnit(getUnit());
  }

HomeAutomationTemperatureJSON *HomeAutomationTemperatureJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationTemperatureJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationTemperatureJSON>, HomeAutomationTemperatureJSON *, bool> generator("Type HomeAutomationTemperature", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
