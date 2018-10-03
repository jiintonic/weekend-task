/* file "FlightAttributeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightAttributeJSON.h"

#include "FlightAttributeJSON.h"


FlightAttributeJSON::TypeValue FlightAttributeJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strncmp(&(chars[1]), "rrival", 6) == 0)
              {
                switch ((unsigned char)(chars[7]))
                  {
                    case 'A':
                        if (strcmp(&(chars[8]), "irport") == 0)
                            return Value_ArrivalAirport;
                        break;
                    case 'G':
                        if (strcmp(&(chars[8]), "ate") == 0)
                            return Value_ArrivalGate;
                        break;
                    case 'I':
                        if (strcmp(&(chars[8]), "nformation") == 0)
                            return Value_ArrivalInformation;
                        break;
                    case 'L':
                        if (strcmp(&(chars[8]), "ocation") == 0)
                            return Value_ArrivalLocation;
                        break;
                    case 'T':
                        switch ((unsigned char)(chars[8]))
                          {
                            case 'e':
                                if (strcmp(&(chars[9]), "rminal") == 0)
                                    return Value_ArrivalTerminal;
                                break;
                            case 'i':
                                if (strcmp(&(chars[9]), "me") == 0)
                                    return Value_ArrivalTime;
                                break;
                            default:
                                break;
                          }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'D':
            if (strncmp(&(chars[1]), "eparture", 8) == 0)
              {
                switch ((unsigned char)(chars[9]))
                  {
                    case 'A':
                        if (strcmp(&(chars[10]), "irport") == 0)
                            return Value_DepartureAirport;
                        break;
                    case 'G':
                        if (strcmp(&(chars[10]), "ate") == 0)
                            return Value_DepartureGate;
                        break;
                    case 'I':
                        if (strcmp(&(chars[10]), "nformation") == 0)
                            return Value_DepartureInformation;
                        break;
                    case 'L':
                        if (strcmp(&(chars[10]), "ocation") == 0)
                            return Value_DepartureLocation;
                        break;
                    case 'T':
                        switch ((unsigned char)(chars[10]))
                          {
                            case 'e':
                                if (strcmp(&(chars[11]), "rminal") == 0)
                                    return Value_DepartureTerminal;
                                break;
                            case 'i':
                                if (strcmp(&(chars[11]), "me") == 0)
                                    return Value_DepartureTime;
                                break;
                            default:
                                break;
                          }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'F':
            if (strcmp(&(chars[1]), "lightDuration") == 0)
                return Value_FlightDuration;
            break;
        case 'H':
            if (strncmp(&(chars[1]), "as", 2) == 0)
              {
                switch ((unsigned char)(chars[3]))
                  {
                    case 'A':
                        if (strcmp(&(chars[4]), "rrived") == 0)
                            return Value_HasArrived;
                        break;
                    case 'D':
                        if (strcmp(&(chars[4]), "eparted") == 0)
                            return Value_HasDeparted;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'S':
            if (strcmp(&(chars[1]), "tatus") == 0)
                return Value_Status;
            break;
        default:
            break;
      }
    throw("The value for field `Value' is not one of the legal values.");
  }

const char *FlightAttributeJSON::stringFromValue(TypeValue the_enum)
  {
    switch (the_enum)
      {
        case Value_Status:
            return "Status";
        case Value_DepartureInformation:
            return "DepartureInformation";
        case Value_DepartureTime:
            return "DepartureTime";
        case Value_HasDeparted:
            return "HasDeparted";
        case Value_DepartureLocation:
            return "DepartureLocation";
        case Value_DepartureAirport:
            return "DepartureAirport";
        case Value_DepartureTerminal:
            return "DepartureTerminal";
        case Value_DepartureGate:
            return "DepartureGate";
        case Value_ArrivalInformation:
            return "ArrivalInformation";
        case Value_ArrivalTime:
            return "ArrivalTime";
        case Value_HasArrived:
            return "HasArrived";
        case Value_ArrivalLocation:
            return "ArrivalLocation";
        case Value_ArrivalAirport:
            return "ArrivalAirport";
        case Value_ArrivalTerminal:
            return "ArrivalTerminal";
        case Value_ArrivalGate:
            return "ArrivalGate";
        case Value_FlightDuration:
            return "FlightDuration";
        default:
            assert(false);
            return NULL;
      }
  }

FlightAttributeJSON::FlightAttributeJSON(const FlightAttributeJSON &)
  {
    assert(false);
  }

FlightAttributeJSON &FlightAttributeJSON::operator=(const FlightAttributeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightAttributeJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of FlightAttributeJSON is not a string.");
    TypeValue the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strncmp(&(json_string->getData()[1]), "rrival", 6) == 0)
              {
                switch ((unsigned char)(json_string->getData()[7]))
                  {
                    case 'A':
                        if (strcmp(&(json_string->getData()[8]), "irport") == 0)
                              {
                                the_enum = Value_ArrivalAirport;
                                goto enum_is_done;
                              }
                        break;
                    case 'G':
                        if (strcmp(&(json_string->getData()[8]), "ate") == 0)
                              {
                                the_enum = Value_ArrivalGate;
                                goto enum_is_done;
                              }
                        break;
                    case 'I':
                        if (strcmp(&(json_string->getData()[8]), "nformation") == 0)
                              {
                                the_enum = Value_ArrivalInformation;
                                goto enum_is_done;
                              }
                        break;
                    case 'L':
                        if (strcmp(&(json_string->getData()[8]), "ocation") == 0)
                              {
                                the_enum = Value_ArrivalLocation;
                                goto enum_is_done;
                              }
                        break;
                    case 'T':
                        switch ((unsigned char)(json_string->getData()[8]))
                          {
                            case 'e':
                                if (strcmp(&(json_string->getData()[9]), "rminal") == 0)
                                      {
                                        the_enum = Value_ArrivalTerminal;
                                        goto enum_is_done;
                                      }
                                break;
                            case 'i':
                                if (strcmp(&(json_string->getData()[9]), "me") == 0)
                                      {
                                        the_enum = Value_ArrivalTime;
                                        goto enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'D':
            if (strncmp(&(json_string->getData()[1]), "eparture", 8) == 0)
              {
                switch ((unsigned char)(json_string->getData()[9]))
                  {
                    case 'A':
                        if (strcmp(&(json_string->getData()[10]), "irport") == 0)
                              {
                                the_enum = Value_DepartureAirport;
                                goto enum_is_done;
                              }
                        break;
                    case 'G':
                        if (strcmp(&(json_string->getData()[10]), "ate") == 0)
                              {
                                the_enum = Value_DepartureGate;
                                goto enum_is_done;
                              }
                        break;
                    case 'I':
                        if (strcmp(&(json_string->getData()[10]), "nformation") == 0)
                              {
                                the_enum = Value_DepartureInformation;
                                goto enum_is_done;
                              }
                        break;
                    case 'L':
                        if (strcmp(&(json_string->getData()[10]), "ocation") == 0)
                              {
                                the_enum = Value_DepartureLocation;
                                goto enum_is_done;
                              }
                        break;
                    case 'T':
                        switch ((unsigned char)(json_string->getData()[10]))
                          {
                            case 'e':
                                if (strcmp(&(json_string->getData()[11]), "rminal") == 0)
                                      {
                                        the_enum = Value_DepartureTerminal;
                                        goto enum_is_done;
                                      }
                                break;
                            case 'i':
                                if (strcmp(&(json_string->getData()[11]), "me") == 0)
                                      {
                                        the_enum = Value_DepartureTime;
                                        goto enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'F':
            if (strcmp(&(json_string->getData()[1]), "lightDuration") == 0)
                  {
                    the_enum = Value_FlightDuration;
                    goto enum_is_done;
                  }
            break;
        case 'H':
            if (strncmp(&(json_string->getData()[1]), "as", 2) == 0)
              {
                switch ((unsigned char)(json_string->getData()[3]))
                  {
                    case 'A':
                        if (strcmp(&(json_string->getData()[4]), "rrived") == 0)
                              {
                                the_enum = Value_HasArrived;
                                goto enum_is_done;
                              }
                        break;
                    case 'D':
                        if (strcmp(&(json_string->getData()[4]), "eparted") == 0)
                              {
                                the_enum = Value_HasDeparted;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "tatus") == 0)
                  {
                    the_enum = Value_Status;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Value of FlightAttributeJSON is not one of the legal strings.");
  enum_is_done:;
    setValue(the_enum);
  }

FlightAttributeJSON::FlightAttributeJSON(void) :
        flagHasValue(false)
  {
  }

FlightAttributeJSON::FlightAttributeJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

FlightAttributeJSON::FlightAttributeJSON(const char *init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value))
  {
  }

FlightAttributeJSON::FlightAttributeJSON(std::string init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value.c_str()))
  {
  }

FlightAttributeJSON::~FlightAttributeJSON(void)
  {
  }

bool FlightAttributeJSON::hasValue(void) const
  {
    return flagHasValue;
  }

FlightAttributeJSON::TypeValue FlightAttributeJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const FlightAttributeJSON::TypeValue FlightAttributeJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *FlightAttributeJSON::getValueAsChars(void) const
  {
    return stringFromValue(getValue());
  }

std::string FlightAttributeJSON::getValueAsString(void) const
  {
    return stringFromValue(getValue());
  }

FlightAttributeJSON *FlightAttributeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightAttributeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightAttributeJSON>, FlightAttributeJSON *, bool> generator("Type FlightAttribute", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
