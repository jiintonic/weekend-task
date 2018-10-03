/* file "FlightBookingLookupParameterJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightBookingLookupParameterJSON.h"

#include "FlightBookingLookupParameterJSON.h"


FlightBookingLookupParameterJSON::TypeValue FlightBookingLookupParameterJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'D':
            if (strncmp(&(chars[1]), "e", 1) == 0)
              {
                switch ((unsigned char)(chars[2]))
                  {
                    case 'p':
                        if (strcmp(&(chars[3]), "artureDate") == 0)
                            return Value_DepartureDate;
                        break;
                    case 's':
                        if (strcmp(&(chars[3]), "tination") == 0)
                            return Value_Destination;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'N':
            if (strcmp(&(chars[1]), "othing") == 0)
                return Value_Nothing;
            break;
        case 'R':
            if (strcmp(&(chars[1]), "eturnDate") == 0)
                return Value_ReturnDate;
            break;
        case 'T':
            if (strcmp(&(chars[1]), "ripType") == 0)
                return Value_TripType;
            break;
        default:
            break;
      }
    throw("The value for field `Value' is not one of the legal values.");
  }

const char *FlightBookingLookupParameterJSON::stringFromValue(TypeValue the_enum)
  {
    switch (the_enum)
      {
        case Value_DepartureDate:
            return "DepartureDate";
        case Value_Destination:
            return "Destination";
        case Value_TripType:
            return "TripType";
        case Value_ReturnDate:
            return "ReturnDate";
        case Value_Nothing:
            return "Nothing";
        default:
            assert(false);
            return NULL;
      }
  }

FlightBookingLookupParameterJSON::FlightBookingLookupParameterJSON(const FlightBookingLookupParameterJSON &)
  {
    assert(false);
  }

FlightBookingLookupParameterJSON &FlightBookingLookupParameterJSON::operator=(const FlightBookingLookupParameterJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightBookingLookupParameterJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of FlightBookingLookupParameterJSON is not a string.");
    TypeValue the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'D':
            if (strncmp(&(json_string->getData()[1]), "e", 1) == 0)
              {
                switch ((unsigned char)(json_string->getData()[2]))
                  {
                    case 'p':
                        if (strcmp(&(json_string->getData()[3]), "artureDate") == 0)
                              {
                                the_enum = Value_DepartureDate;
                                goto enum_is_done;
                              }
                        break;
                    case 's':
                        if (strcmp(&(json_string->getData()[3]), "tination") == 0)
                              {
                                the_enum = Value_Destination;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "othing") == 0)
                  {
                    the_enum = Value_Nothing;
                    goto enum_is_done;
                  }
            break;
        case 'R':
            if (strcmp(&(json_string->getData()[1]), "eturnDate") == 0)
                  {
                    the_enum = Value_ReturnDate;
                    goto enum_is_done;
                  }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "ripType") == 0)
                  {
                    the_enum = Value_TripType;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Value of FlightBookingLookupParameterJSON is not one of the legal strings.");
  enum_is_done:;
    setValue(the_enum);
  }

FlightBookingLookupParameterJSON::FlightBookingLookupParameterJSON(void) :
        flagHasValue(false)
  {
  }

FlightBookingLookupParameterJSON::FlightBookingLookupParameterJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

FlightBookingLookupParameterJSON::FlightBookingLookupParameterJSON(const char *init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value))
  {
  }

FlightBookingLookupParameterJSON::FlightBookingLookupParameterJSON(std::string init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value.c_str()))
  {
  }

FlightBookingLookupParameterJSON::~FlightBookingLookupParameterJSON(void)
  {
  }

bool FlightBookingLookupParameterJSON::hasValue(void) const
  {
    return flagHasValue;
  }

FlightBookingLookupParameterJSON::TypeValue FlightBookingLookupParameterJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const FlightBookingLookupParameterJSON::TypeValue FlightBookingLookupParameterJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *FlightBookingLookupParameterJSON::getValueAsChars(void) const
  {
    return stringFromValue(getValue());
  }

std::string FlightBookingLookupParameterJSON::getValueAsString(void) const
  {
    return stringFromValue(getValue());
  }

FlightBookingLookupParameterJSON *FlightBookingLookupParameterJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightBookingLookupParameterJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightBookingLookupParameterJSON>, FlightBookingLookupParameterJSON *, bool> generator("Type FlightBookingLookupParameter", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
