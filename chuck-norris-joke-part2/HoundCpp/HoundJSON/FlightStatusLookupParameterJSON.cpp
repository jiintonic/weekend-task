/* file "FlightStatusLookupParameterJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightStatusLookupParameterJSON.h"

#include "FlightStatusLookupParameterJSON.h"


FlightStatusLookupParameterJSON::TypeValue FlightStatusLookupParameterJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            switch ((unsigned char)(chars[1]))
              {
                case 'i':
                    if (strcmp(&(chars[2]), "rline") == 0)
                        return Value_Airline;
                    break;
                case 'r':
                    if (strcmp(&(chars[2]), "rivalLocation") == 0)
                        return Value_ArrivalLocation;
                    break;
                default:
                    break;
              }
            break;
        case 'D':
            if (strncmp(&(chars[1]), "eparture", 8) == 0)
              {
                switch ((unsigned char)(chars[9]))
                  {
                    case 'L':
                        if (strcmp(&(chars[10]), "ocation") == 0)
                            return Value_DepartureLocation;
                        break;
                    case 'O':
                        if (strcmp(&(chars[10]), "rArrivalDate") == 0)
                            return Value_DepartureOrArrivalDate;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'F':
            if (strcmp(&(chars[1]), "lightNumber") == 0)
                return Value_FlightNumber;
            break;
        case 'N':
            if (strcmp(&(chars[1]), "othing") == 0)
                return Value_Nothing;
            break;
        default:
            break;
      }
    throw("The value for field `Value' is not one of the legal values.");
  }

const char *FlightStatusLookupParameterJSON::stringFromValue(TypeValue the_enum)
  {
    switch (the_enum)
      {
        case Value_FlightNumber:
            return "FlightNumber";
        case Value_Airline:
            return "Airline";
        case Value_DepartureLocation:
            return "DepartureLocation";
        case Value_ArrivalLocation:
            return "ArrivalLocation";
        case Value_DepartureOrArrivalDate:
            return "DepartureOrArrivalDate";
        case Value_Nothing:
            return "Nothing";
        default:
            assert(false);
            return NULL;
      }
  }

FlightStatusLookupParameterJSON::FlightStatusLookupParameterJSON(const FlightStatusLookupParameterJSON &)
  {
    assert(false);
  }

FlightStatusLookupParameterJSON &FlightStatusLookupParameterJSON::operator=(const FlightStatusLookupParameterJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightStatusLookupParameterJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of FlightStatusLookupParameterJSON is not a string.");
    TypeValue the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "rline") == 0)
                          {
                            the_enum = Value_Airline;
                            goto enum_is_done;
                          }
                    break;
                case 'r':
                    if (strcmp(&(json_string->getData()[2]), "rivalLocation") == 0)
                          {
                            the_enum = Value_ArrivalLocation;
                            goto enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'D':
            if (strncmp(&(json_string->getData()[1]), "eparture", 8) == 0)
              {
                switch ((unsigned char)(json_string->getData()[9]))
                  {
                    case 'L':
                        if (strcmp(&(json_string->getData()[10]), "ocation") == 0)
                              {
                                the_enum = Value_DepartureLocation;
                                goto enum_is_done;
                              }
                        break;
                    case 'O':
                        if (strcmp(&(json_string->getData()[10]), "rArrivalDate") == 0)
                              {
                                the_enum = Value_DepartureOrArrivalDate;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'F':
            if (strcmp(&(json_string->getData()[1]), "lightNumber") == 0)
                  {
                    the_enum = Value_FlightNumber;
                    goto enum_is_done;
                  }
            break;
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "othing") == 0)
                  {
                    the_enum = Value_Nothing;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Value of FlightStatusLookupParameterJSON is not one of the legal strings.");
  enum_is_done:;
    setValue(the_enum);
  }

FlightStatusLookupParameterJSON::FlightStatusLookupParameterJSON(void) :
        flagHasValue(false)
  {
  }

FlightStatusLookupParameterJSON::FlightStatusLookupParameterJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

FlightStatusLookupParameterJSON::FlightStatusLookupParameterJSON(const char *init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value))
  {
  }

FlightStatusLookupParameterJSON::FlightStatusLookupParameterJSON(std::string init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value.c_str()))
  {
  }

FlightStatusLookupParameterJSON::~FlightStatusLookupParameterJSON(void)
  {
  }

bool FlightStatusLookupParameterJSON::hasValue(void) const
  {
    return flagHasValue;
  }

FlightStatusLookupParameterJSON::TypeValue FlightStatusLookupParameterJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const FlightStatusLookupParameterJSON::TypeValue FlightStatusLookupParameterJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *FlightStatusLookupParameterJSON::getValueAsChars(void) const
  {
    return stringFromValue(getValue());
  }

std::string FlightStatusLookupParameterJSON::getValueAsString(void) const
  {
    return stringFromValue(getValue());
  }

FlightStatusLookupParameterJSON *FlightStatusLookupParameterJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightStatusLookupParameterJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightStatusLookupParameterJSON>, FlightStatusLookupParameterJSON *, bool> generator("Type FlightStatusLookupParameter", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
