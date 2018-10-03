/* file "FlightSortFieldJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightSortFieldJSON.h"

#include "FlightSortFieldJSON.h"


FlightSortFieldJSON::TypeValue::TypeValue(void)
  {
  }

FlightSortFieldJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

FlightSortFieldJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool FlightSortFieldJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool FlightSortFieldJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool FlightSortFieldJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool FlightSortFieldJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool FlightSortFieldJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool FlightSortFieldJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

FlightSortFieldJSON::TypeValueKnownValues FlightSortFieldJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "irline") == 0)
                return Value_Airline;
            break;
        case 'C':
            if (strcmp(&(chars[1]), "abinClass") == 0)
                return Value_CabinClass;
            break;
        case 'O':
            if (strncmp(&(chars[1]), "utbound", 7) == 0)
              {
                switch ((unsigned char)(chars[8]))
                  {
                    case 'A':
                        if (strncmp(&(chars[9]), "rrival", 6) == 0)
                          {
                            switch ((unsigned char)(chars[15]))
                              {
                                case 'D':
                                    if (strcmp(&(chars[16]), "ate") == 0)
                                        return Value_OutboundArrivalDate;
                                    break;
                                case 'T':
                                    if (strcmp(&(chars[16]), "ime") == 0)
                                        return Value_OutboundArrivalTime;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'D':
                        if (strncmp(&(chars[9]), "e", 1) == 0)
                          {
                            switch ((unsigned char)(chars[10]))
                              {
                                case 'p':
                                    if (strncmp(&(chars[11]), "arture", 6) == 0)
                                      {
                                        switch ((unsigned char)(chars[17]))
                                          {
                                            case 'A':
                                                if (strcmp(&(chars[18]), "irport") == 0)
                                                    return Value_OutboundDepartureAirport;
                                                break;
                                            case 'D':
                                                if (strcmp(&(chars[18]), "ate") == 0)
                                                    return Value_OutboundDepartureDate;
                                                break;
                                            case 'T':
                                                if (strcmp(&(chars[18]), "ime") == 0)
                                                    return Value_OutboundDepartureTime;
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 's':
                                    if (strcmp(&(chars[11]), "tinationAirport") == 0)
                                        return Value_OutboundDestinationAirport;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'P':
            if (strcmp(&(chars[1]), "rice") == 0)
                return Value_Price;
            break;
        case 'R':
            if (strncmp(&(chars[1]), "eturn", 5) == 0)
              {
                switch ((unsigned char)(chars[6]))
                  {
                    case 'A':
                        if (strncmp(&(chars[7]), "rrival", 6) == 0)
                          {
                            switch ((unsigned char)(chars[13]))
                              {
                                case 'D':
                                    if (strcmp(&(chars[14]), "ate") == 0)
                                        return Value_ReturnArrivalDate;
                                    break;
                                case 'T':
                                    if (strcmp(&(chars[14]), "ime") == 0)
                                        return Value_ReturnArrivalTime;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'D':
                        if (strncmp(&(chars[7]), "e", 1) == 0)
                          {
                            switch ((unsigned char)(chars[8]))
                              {
                                case 'p':
                                    if (strncmp(&(chars[9]), "arture", 6) == 0)
                                      {
                                        switch ((unsigned char)(chars[15]))
                                          {
                                            case 'A':
                                                if (strcmp(&(chars[16]), "irport") == 0)
                                                    return Value_ReturnDepartureAirport;
                                                break;
                                            case 'D':
                                                if (strcmp(&(chars[16]), "ate") == 0)
                                                    return Value_ReturnDepartureDate;
                                                break;
                                            case 'T':
                                                if (strcmp(&(chars[16]), "ime") == 0)
                                                    return Value_ReturnDepartureTime;
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 's':
                                    if (strcmp(&(chars[9]), "tinationAirport") == 0)
                                        return Value_ReturnDestinationAirport;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'T':
            switch ((unsigned char)(chars[1]))
              {
                case 'o':
                    if (strcmp(&(chars[2]), "talLayoverDuration") == 0)
                        return Value_TotalLayoverDuration;
                    break;
                case 'r':
                    if (strcmp(&(chars[2]), "avelDuration") == 0)
                        return Value_TravelDuration;
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }
    return Value__none;
  }

const char *FlightSortFieldJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_Price:
            return "Price";
        case Value_TravelDuration:
            return "TravelDuration";
        case Value_TotalLayoverDuration:
            return "TotalLayoverDuration";
        case Value_OutboundDepartureDate:
            return "OutboundDepartureDate";
        case Value_OutboundDepartureTime:
            return "OutboundDepartureTime";
        case Value_OutboundArrivalDate:
            return "OutboundArrivalDate";
        case Value_OutboundArrivalTime:
            return "OutboundArrivalTime";
        case Value_OutboundDepartureAirport:
            return "OutboundDepartureAirport";
        case Value_OutboundDestinationAirport:
            return "OutboundDestinationAirport";
        case Value_ReturnDepartureDate:
            return "ReturnDepartureDate";
        case Value_ReturnDepartureTime:
            return "ReturnDepartureTime";
        case Value_ReturnArrivalDate:
            return "ReturnArrivalDate";
        case Value_ReturnArrivalTime:
            return "ReturnArrivalTime";
        case Value_ReturnDepartureAirport:
            return "ReturnDepartureAirport";
        case Value_ReturnDestinationAirport:
            return "ReturnDestinationAirport";
        case Value_CabinClass:
            return "CabinClass";
        case Value_Airline:
            return "Airline";
        default:
            assert(false);
            return NULL;
      }
  }

FlightSortFieldJSON::FlightSortFieldJSON(const FlightSortFieldJSON &)
  {
    assert(false);
  }

FlightSortFieldJSON &FlightSortFieldJSON::operator=(const FlightSortFieldJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightSortFieldJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of FlightSortFieldJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "irline") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Airline;
                    goto open_enum_is_done;
                  }
            break;
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "abinClass") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_CabinClass;
                    goto open_enum_is_done;
                  }
            break;
        case 'O':
            if (strncmp(&(json_string->getData()[1]), "utbound", 7) == 0)
              {
                switch ((unsigned char)(json_string->getData()[8]))
                  {
                    case 'A':
                        if (strncmp(&(json_string->getData()[9]), "rrival", 6) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[15]))
                              {
                                case 'D':
                                    if (strcmp(&(json_string->getData()[16]), "ate") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_OutboundArrivalDate;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'T':
                                    if (strcmp(&(json_string->getData()[16]), "ime") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_OutboundArrivalTime;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'D':
                        if (strncmp(&(json_string->getData()[9]), "e", 1) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[10]))
                              {
                                case 'p':
                                    if (strncmp(&(json_string->getData()[11]), "arture", 6) == 0)
                                      {
                                        switch ((unsigned char)(json_string->getData()[17]))
                                          {
                                            case 'A':
                                                if (strcmp(&(json_string->getData()[18]), "irport") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Value_OutboundDepartureAirport;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'D':
                                                if (strcmp(&(json_string->getData()[18]), "ate") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Value_OutboundDepartureDate;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'T':
                                                if (strcmp(&(json_string->getData()[18]), "ime") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Value_OutboundDepartureTime;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 's':
                                    if (strcmp(&(json_string->getData()[11]), "tinationAirport") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_OutboundDestinationAirport;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'P':
            if (strcmp(&(json_string->getData()[1]), "rice") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Price;
                    goto open_enum_is_done;
                  }
            break;
        case 'R':
            if (strncmp(&(json_string->getData()[1]), "eturn", 5) == 0)
              {
                switch ((unsigned char)(json_string->getData()[6]))
                  {
                    case 'A':
                        if (strncmp(&(json_string->getData()[7]), "rrival", 6) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[13]))
                              {
                                case 'D':
                                    if (strcmp(&(json_string->getData()[14]), "ate") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_ReturnArrivalDate;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'T':
                                    if (strcmp(&(json_string->getData()[14]), "ime") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_ReturnArrivalTime;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'D':
                        if (strncmp(&(json_string->getData()[7]), "e", 1) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[8]))
                              {
                                case 'p':
                                    if (strncmp(&(json_string->getData()[9]), "arture", 6) == 0)
                                      {
                                        switch ((unsigned char)(json_string->getData()[15]))
                                          {
                                            case 'A':
                                                if (strcmp(&(json_string->getData()[16]), "irport") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Value_ReturnDepartureAirport;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'D':
                                                if (strcmp(&(json_string->getData()[16]), "ate") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Value_ReturnDepartureDate;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'T':
                                                if (strcmp(&(json_string->getData()[16]), "ime") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Value_ReturnDepartureTime;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 's':
                                    if (strcmp(&(json_string->getData()[9]), "tinationAirport") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_ReturnDestinationAirport;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'T':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "talLayoverDuration") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_TotalLayoverDuration;
                            goto open_enum_is_done;
                          }
                    break;
                case 'r':
                    if (strcmp(&(json_string->getData()[2]), "avelDuration") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_TravelDuration;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setValue(the_open_enum);
  }

FlightSortFieldJSON::FlightSortFieldJSON(void) :
        flagHasValue(false)
  {
  }

FlightSortFieldJSON::FlightSortFieldJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

FlightSortFieldJSON::FlightSortFieldJSON(const char *init_value) :
        flagHasValue(true)
  {
    TypeValueKnownValues known = stringToValue(init_value);
    if (known == Value__none)
      {
        storeValue.in_known_list = false;
        storeValue.string_value = init_value;
      }
    else
      {
        storeValue.in_known_list = true;
        storeValue.list_value = known;
      }
  }

FlightSortFieldJSON::FlightSortFieldJSON(std::string init_value) :
        flagHasValue(true)
  {
    TypeValueKnownValues known = stringToValue(init_value.c_str());
    if (known == Value__none)
      {
        storeValue.in_known_list = false;
        storeValue.string_value = init_value;
      }
    else
      {
        storeValue.in_known_list = true;
        storeValue.list_value = known;
      }
  }

FlightSortFieldJSON::FlightSortFieldJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

FlightSortFieldJSON::~FlightSortFieldJSON(void)
  {
  }

bool FlightSortFieldJSON::hasValue(void) const
  {
    return flagHasValue;
  }

FlightSortFieldJSON::TypeValue FlightSortFieldJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const FlightSortFieldJSON::TypeValue FlightSortFieldJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *FlightSortFieldJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string FlightSortFieldJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

FlightSortFieldJSON *FlightSortFieldJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightSortFieldJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightSortFieldJSON>, FlightSortFieldJSON *, bool> generator("Type FlightSortField", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
