/* file "FlightTimeFormatJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightTimeFormatJSON.h"

#include "FlightTimeFormatJSON.h"


FlightTimeFormatJSON::TypeFormat FlightTimeFormatJSON::stringToFormat(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'D':
            if (strcmp(&(chars[1]), "ateTime") == 0)
                return Format_DateTime;
            break;
        case 'H':
            if (strcmp(&(chars[1]), "owLateEarly") == 0)
                return Format_HowLateEarly;
            break;
        case 'T':
            if (strcmp(&(chars[1]), "imeTill") == 0)
                return Format_TimeTill;
            break;
        default:
            break;
      }
    throw("The value for field `Format' is not one of the legal values.");
  }

const char *FlightTimeFormatJSON::stringFromFormat(TypeFormat the_enum)
  {
    switch (the_enum)
      {
        case Format_DateTime:
            return "DateTime";
        case Format_TimeTill:
            return "TimeTill";
        case Format_HowLateEarly:
            return "HowLateEarly";
        default:
            assert(false);
            return NULL;
      }
  }

FlightTimeFormatJSON::TypeUnit FlightTimeFormatJSON::stringToUnit(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'H':
            if (strcmp(&(chars[1]), "our") == 0)
                return Unit_Hour;
            break;
        case 'M':
            if (strcmp(&(chars[1]), "inute") == 0)
                return Unit_Minute;
            break;
        case 'N':
            if (strcmp(&(chars[1]), "one") == 0)
                return Unit_None;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "econd") == 0)
                return Unit_Second;
            break;
        case 'W':
            if (strcmp(&(chars[1]), "eek") == 0)
                return Unit_Week;
            break;
        default:
            break;
      }
    throw("The value for field `Unit' is not one of the legal values.");
  }

const char *FlightTimeFormatJSON::stringFromUnit(TypeUnit the_enum)
  {
    switch (the_enum)
      {
        case Unit_None:
            return "None";
        case Unit_Week:
            return "Week";
        case Unit_Hour:
            return "Hour";
        case Unit_Minute:
            return "Minute";
        case Unit_Second:
            return "Second";
        default:
            assert(false);
            return NULL;
      }
  }

FlightTimeFormatJSON::FlightTimeFormatJSON(const FlightTimeFormatJSON &)
  {
    assert(false);
  }

FlightTimeFormatJSON &FlightTimeFormatJSON::operator=(const FlightTimeFormatJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightTimeFormatJSON::fromJSONFormat(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Format of FlightTimeFormatJSON is not a string.");
    TypeFormat the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "ateTime") == 0)
                  {
                    the_enum = Format_DateTime;
                    goto enum_is_done;
                  }
            break;
        case 'H':
            if (strcmp(&(json_string->getData()[1]), "owLateEarly") == 0)
                  {
                    the_enum = Format_HowLateEarly;
                    goto enum_is_done;
                  }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "imeTill") == 0)
                  {
                    the_enum = Format_TimeTill;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Format of FlightTimeFormatJSON is not one of the legal strings.");
  enum_is_done:;
    setFormat(the_enum);
  }

void FlightTimeFormatJSON::fromJSONUnit(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Unit of FlightTimeFormatJSON is not a string.");
    TypeUnit the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'H':
            if (strcmp(&(json_string->getData()[1]), "our") == 0)
                  {
                    the_enum = Unit_Hour;
                    goto enum_is_done;
                  }
            break;
        case 'M':
            if (strcmp(&(json_string->getData()[1]), "inute") == 0)
                  {
                    the_enum = Unit_Minute;
                    goto enum_is_done;
                  }
            break;
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "one") == 0)
                  {
                    the_enum = Unit_None;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "econd") == 0)
                  {
                    the_enum = Unit_Second;
                    goto enum_is_done;
                  }
            break;
        case 'W':
            if (strcmp(&(json_string->getData()[1]), "eek") == 0)
                  {
                    the_enum = Unit_Week;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Unit of FlightTimeFormatJSON is not one of the legal strings.");
  enum_is_done:;
    setUnit(the_enum);
  }

FlightTimeFormatJSON::FlightTimeFormatJSON(void) :
        flagHasFormat(false),
        flagHasUnit(false)
  {
    extraIndex = create_string_index();
  }

FlightTimeFormatJSON::~FlightTimeFormatJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightTimeFormatJSON::hasFormat(void) const
  {
    return flagHasFormat;
  }

FlightTimeFormatJSON::TypeFormat FlightTimeFormatJSON::getFormat(void)
  {
    assert(flagHasFormat);
    return storeFormat;
  }

const FlightTimeFormatJSON::TypeFormat FlightTimeFormatJSON::getFormat(void) const
  {
    assert(flagHasFormat);
    return storeFormat;
  }

const char *FlightTimeFormatJSON::getFormatAsChars(void) const
  {
    return stringFromFormat(getFormat());
  }

std::string FlightTimeFormatJSON::getFormatAsString(void) const
  {
    return stringFromFormat(getFormat());
  }

bool FlightTimeFormatJSON::hasUnit(void) const
  {
    return flagHasUnit;
  }

FlightTimeFormatJSON::TypeUnit FlightTimeFormatJSON::getUnit(void)
  {
    assert(flagHasUnit);
    return storeUnit;
  }

const FlightTimeFormatJSON::TypeUnit FlightTimeFormatJSON::getUnit(void) const
  {
    assert(flagHasUnit);
    return storeUnit;
  }

const char *FlightTimeFormatJSON::getUnitAsChars(void) const
  {
    return stringFromUnit(getUnit());
  }

std::string FlightTimeFormatJSON::getUnitAsString(void) const
  {
    return stringFromUnit(getUnit());
  }

FlightTimeFormatJSON *FlightTimeFormatJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightTimeFormatJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightTimeFormatJSON>, FlightTimeFormatJSON *, bool> generator("Type FlightTimeFormat", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
