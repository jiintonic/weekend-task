/* file "FlightTripTypeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightTripTypeJSON.h"

#include "FlightTripTypeJSON.h"


FlightTripTypeJSON::TypeValue FlightTripTypeJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'M':
            if (strcmp(&(chars[1]), "ultipleDestinations") == 0)
                return Value_MultipleDestinations;
            break;
        case 'O':
            if (strcmp(&(chars[1]), "neWay") == 0)
                return Value_OneWay;
            break;
        case 'R':
            if (strcmp(&(chars[1]), "oundTrip") == 0)
                return Value_RoundTrip;
            break;
        case 'U':
            if (strcmp(&(chars[1]), "nspecified") == 0)
                return Value_Unspecified;
            break;
        default:
            break;
      }
    throw("The value for field `Value' is not one of the legal values.");
  }

const char *FlightTripTypeJSON::stringFromValue(TypeValue the_enum)
  {
    switch (the_enum)
      {
        case Value_Unspecified:
            return "Unspecified";
        case Value_OneWay:
            return "OneWay";
        case Value_RoundTrip:
            return "RoundTrip";
        case Value_MultipleDestinations:
            return "MultipleDestinations";
        default:
            assert(false);
            return NULL;
      }
  }

FlightTripTypeJSON::FlightTripTypeJSON(const FlightTripTypeJSON &)
  {
    assert(false);
  }

FlightTripTypeJSON &FlightTripTypeJSON::operator=(const FlightTripTypeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightTripTypeJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of FlightTripTypeJSON is not a string.");
    TypeValue the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'M':
            if (strcmp(&(json_string->getData()[1]), "ultipleDestinations") == 0)
                  {
                    the_enum = Value_MultipleDestinations;
                    goto enum_is_done;
                  }
            break;
        case 'O':
            if (strcmp(&(json_string->getData()[1]), "neWay") == 0)
                  {
                    the_enum = Value_OneWay;
                    goto enum_is_done;
                  }
            break;
        case 'R':
            if (strcmp(&(json_string->getData()[1]), "oundTrip") == 0)
                  {
                    the_enum = Value_RoundTrip;
                    goto enum_is_done;
                  }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "nspecified") == 0)
                  {
                    the_enum = Value_Unspecified;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Value of FlightTripTypeJSON is not one of the legal strings.");
  enum_is_done:;
    setValue(the_enum);
  }

FlightTripTypeJSON::FlightTripTypeJSON(void) :
        flagHasValue(false)
  {
  }

FlightTripTypeJSON::FlightTripTypeJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

FlightTripTypeJSON::FlightTripTypeJSON(const char *init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value))
  {
  }

FlightTripTypeJSON::FlightTripTypeJSON(std::string init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value.c_str()))
  {
  }

FlightTripTypeJSON::~FlightTripTypeJSON(void)
  {
  }

bool FlightTripTypeJSON::hasValue(void) const
  {
    return flagHasValue;
  }

FlightTripTypeJSON::TypeValue FlightTripTypeJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const FlightTripTypeJSON::TypeValue FlightTripTypeJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *FlightTripTypeJSON::getValueAsChars(void) const
  {
    return stringFromValue(getValue());
  }

std::string FlightTripTypeJSON::getValueAsString(void) const
  {
    return stringFromValue(getValue());
  }

FlightTripTypeJSON *FlightTripTypeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightTripTypeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightTripTypeJSON>, FlightTripTypeJSON *, bool> generator("Type FlightTripType", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
