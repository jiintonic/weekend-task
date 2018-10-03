/* file "DepartureOrArrivalJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DepartureOrArrivalJSON.h"

#include "DepartureOrArrivalJSON.h"


DepartureOrArrivalJSON::TypeValue DepartureOrArrivalJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "rrival") == 0)
                return Value_Arrival;
            break;
        case 'D':
            if (strcmp(&(chars[1]), "eparture") == 0)
                return Value_Departure;
            break;
        case 'E':
            if (strcmp(&(chars[1]), "itherDepartureOrArrival") == 0)
                return Value_EitherDepartureOrArrival;
            break;
        case 'U':
            if (strcmp(&(chars[1]), "nknown") == 0)
                return Value_Unknown;
            break;
        default:
            break;
      }
    throw("The value for field `Value' is not one of the legal values.");
  }

const char *DepartureOrArrivalJSON::stringFromValue(TypeValue the_enum)
  {
    switch (the_enum)
      {
        case Value_Departure:
            return "Departure";
        case Value_Arrival:
            return "Arrival";
        case Value_EitherDepartureOrArrival:
            return "EitherDepartureOrArrival";
        case Value_Unknown:
            return "Unknown";
        default:
            assert(false);
            return NULL;
      }
  }

DepartureOrArrivalJSON::DepartureOrArrivalJSON(const DepartureOrArrivalJSON &)
  {
    assert(false);
  }

DepartureOrArrivalJSON &DepartureOrArrivalJSON::operator=(const DepartureOrArrivalJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DepartureOrArrivalJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of DepartureOrArrivalJSON is not a string.");
    TypeValue the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "rrival") == 0)
                  {
                    the_enum = Value_Arrival;
                    goto enum_is_done;
                  }
            break;
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "eparture") == 0)
                  {
                    the_enum = Value_Departure;
                    goto enum_is_done;
                  }
            break;
        case 'E':
            if (strcmp(&(json_string->getData()[1]), "itherDepartureOrArrival") == 0)
                  {
                    the_enum = Value_EitherDepartureOrArrival;
                    goto enum_is_done;
                  }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "nknown") == 0)
                  {
                    the_enum = Value_Unknown;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Value of DepartureOrArrivalJSON is not one of the legal strings.");
  enum_is_done:;
    setValue(the_enum);
  }

DepartureOrArrivalJSON::DepartureOrArrivalJSON(void) :
        flagHasValue(false)
  {
  }

DepartureOrArrivalJSON::DepartureOrArrivalJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

DepartureOrArrivalJSON::DepartureOrArrivalJSON(const char *init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value))
  {
  }

DepartureOrArrivalJSON::DepartureOrArrivalJSON(std::string init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value.c_str()))
  {
  }

DepartureOrArrivalJSON::~DepartureOrArrivalJSON(void)
  {
  }

bool DepartureOrArrivalJSON::hasValue(void) const
  {
    return flagHasValue;
  }

DepartureOrArrivalJSON::TypeValue DepartureOrArrivalJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const DepartureOrArrivalJSON::TypeValue DepartureOrArrivalJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *DepartureOrArrivalJSON::getValueAsChars(void) const
  {
    return stringFromValue(getValue());
  }

std::string DepartureOrArrivalJSON::getValueAsString(void) const
  {
    return stringFromValue(getValue());
  }

DepartureOrArrivalJSON *DepartureOrArrivalJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DepartureOrArrivalJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DepartureOrArrivalJSON>, DepartureOrArrivalJSON *, bool> generator("Type DepartureOrArrival", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
