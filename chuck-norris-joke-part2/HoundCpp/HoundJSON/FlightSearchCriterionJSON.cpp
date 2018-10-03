/* file "FlightSearchCriterionJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightSearchCriterionJSON.h"

#include "FlightSearchCriterionJSON.h"


FlightSearchCriterionJSON::TypeValue::TypeValue(void)
  {
  }

FlightSearchCriterionJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

FlightSearchCriterionJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool FlightSearchCriterionJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool FlightSearchCriterionJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool FlightSearchCriterionJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool FlightSearchCriterionJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool FlightSearchCriterionJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool FlightSearchCriterionJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

FlightSearchCriterionJSON::TypeValueKnownValues FlightSearchCriterionJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strncmp(&(chars[1]), "ir", 2) == 0)
              {
                switch ((unsigned char)(chars[3]))
                  {
                    case 'l':
                        if (strcmp(&(chars[4]), "ines") == 0)
                            return Value_Airlines;
                        break;
                    case 'p':
                        if (strcmp(&(chars[4]), "orts") == 0)
                            return Value_Airports;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'C':
            if (strcmp(&(chars[1]), "abinClasses") == 0)
                return Value_CabinClasses;
            break;
        case 'F':
            if (strcmp(&(chars[1]), "lightSegments") == 0)
                return Value_FlightSegments;
            break;
        case 'L':
            if (strcmp(&(chars[1]), "astTripDuration") == 0)
                return Value_LastTripDuration;
            break;
        case 'N':
            if (strcmp(&(chars[1]), "umberOfStops") == 0)
                return Value_NumberOfStops;
            break;
        case 'P':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "ssengerTypeCounts") == 0)
                        return Value_PassengerTypeCounts;
                    break;
                case 'r':
                    if (strcmp(&(chars[2]), "iceRange") == 0)
                        return Value_PriceRange;
                    break;
                default:
                    break;
              }
            break;
        case 'R':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strncmp(&(chars[2]), "ngeOf", 5) == 0)
                      {
                        switch ((unsigned char)(chars[7]))
                          {
                            case 'L':
                                if (strcmp(&(chars[8]), "ayoverDuration") == 0)
                                    return Value_RangeOfLayoverDuration;
                                break;
                            case 'T':
                                switch ((unsigned char)(chars[8]))
                                  {
                                    case 'o':
                                        if (strncmp(&(chars[9]), "tal", 3) == 0)
                                          {
                                            switch ((unsigned char)(chars[12]))
                                              {
                                                case 'L':
                                                    if (strcmp(&(chars[13]), "ayoverDuration") == 0)
                                                        return Value_RangeOfTotalLayoverDuration;
                                                    break;
                                                case 'T':
                                                    if (strcmp(&(chars[13]), "ravelDuration") == 0)
                                                        return Value_RangeOfTotalTravelDuration;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'r':
                                        if (strcmp(&(chars[9]), "avelDuration") == 0)
                                            return Value_RangeOfTravelDuration;
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
                case 'e':
                    if (strcmp(&(chars[2]), "turnFlightSegment") == 0)
                        return Value_ReturnFlightSegment;
                    break;
                default:
                    break;
              }
            break;
        case 'S':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "meDayOrOvernight") == 0)
                        return Value_SameDayOrOvernight;
                    break;
                case 'e':
                    if (strcmp(&(chars[2]), "atPreferences") == 0)
                        return Value_SeatPreferences;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "rtCriteria") == 0)
                        return Value_SortCriteria;
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

const char *FlightSearchCriterionJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_NumberOfStops:
            return "NumberOfStops";
        case Value_PriceRange:
            return "PriceRange";
        case Value_SeatPreferences:
            return "SeatPreferences";
        case Value_RangeOfLayoverDuration:
            return "RangeOfLayoverDuration";
        case Value_RangeOfTotalLayoverDuration:
            return "RangeOfTotalLayoverDuration";
        case Value_RangeOfTravelDuration:
            return "RangeOfTravelDuration";
        case Value_RangeOfTotalTravelDuration:
            return "RangeOfTotalTravelDuration";
        case Value_SameDayOrOvernight:
            return "SameDayOrOvernight";
        case Value_Airlines:
            return "Airlines";
        case Value_FlightSegments:
            return "FlightSegments";
        case Value_ReturnFlightSegment:
            return "ReturnFlightSegment";
        case Value_LastTripDuration:
            return "LastTripDuration";
        case Value_PassengerTypeCounts:
            return "PassengerTypeCounts";
        case Value_CabinClasses:
            return "CabinClasses";
        case Value_Airports:
            return "Airports";
        case Value_SortCriteria:
            return "SortCriteria";
        default:
            assert(false);
            return NULL;
      }
  }

FlightSearchCriterionJSON::FlightSearchCriterionJSON(const FlightSearchCriterionJSON &)
  {
    assert(false);
  }

FlightSearchCriterionJSON &FlightSearchCriterionJSON::operator=(const FlightSearchCriterionJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightSearchCriterionJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of FlightSearchCriterionJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strncmp(&(json_string->getData()[1]), "ir", 2) == 0)
              {
                switch ((unsigned char)(json_string->getData()[3]))
                  {
                    case 'l':
                        if (strcmp(&(json_string->getData()[4]), "ines") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_Airlines;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'p':
                        if (strcmp(&(json_string->getData()[4]), "orts") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_Airports;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "abinClasses") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_CabinClasses;
                    goto open_enum_is_done;
                  }
            break;
        case 'F':
            if (strcmp(&(json_string->getData()[1]), "lightSegments") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_FlightSegments;
                    goto open_enum_is_done;
                  }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "astTripDuration") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_LastTripDuration;
                    goto open_enum_is_done;
                  }
            break;
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "umberOfStops") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_NumberOfStops;
                    goto open_enum_is_done;
                  }
            break;
        case 'P':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "ssengerTypeCounts") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_PassengerTypeCounts;
                            goto open_enum_is_done;
                          }
                    break;
                case 'r':
                    if (strcmp(&(json_string->getData()[2]), "iceRange") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_PriceRange;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'R':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strncmp(&(json_string->getData()[2]), "ngeOf", 5) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[7]))
                          {
                            case 'L':
                                if (strcmp(&(json_string->getData()[8]), "ayoverDuration") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_RangeOfLayoverDuration;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'T':
                                switch ((unsigned char)(json_string->getData()[8]))
                                  {
                                    case 'o':
                                        if (strncmp(&(json_string->getData()[9]), "tal", 3) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[12]))
                                              {
                                                case 'L':
                                                    if (strcmp(&(json_string->getData()[13]), "ayoverDuration") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_RangeOfTotalLayoverDuration;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'T':
                                                    if (strcmp(&(json_string->getData()[13]), "ravelDuration") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_RangeOfTotalTravelDuration;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'r':
                                        if (strcmp(&(json_string->getData()[9]), "avelDuration") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_RangeOfTravelDuration;
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
                      }
                    break;
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "turnFlightSegment") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_ReturnFlightSegment;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'S':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "meDayOrOvernight") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_SameDayOrOvernight;
                            goto open_enum_is_done;
                          }
                    break;
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "atPreferences") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_SeatPreferences;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "rtCriteria") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_SortCriteria;
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

FlightSearchCriterionJSON::FlightSearchCriterionJSON(void) :
        flagHasValue(false)
  {
  }

FlightSearchCriterionJSON::FlightSearchCriterionJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

FlightSearchCriterionJSON::FlightSearchCriterionJSON(const char *init_value) :
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

FlightSearchCriterionJSON::FlightSearchCriterionJSON(std::string init_value) :
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

FlightSearchCriterionJSON::FlightSearchCriterionJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

FlightSearchCriterionJSON::~FlightSearchCriterionJSON(void)
  {
  }

bool FlightSearchCriterionJSON::hasValue(void) const
  {
    return flagHasValue;
  }

FlightSearchCriterionJSON::TypeValue FlightSearchCriterionJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const FlightSearchCriterionJSON::TypeValue FlightSearchCriterionJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *FlightSearchCriterionJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string FlightSearchCriterionJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

FlightSearchCriterionJSON *FlightSearchCriterionJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightSearchCriterionJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightSearchCriterionJSON>, FlightSearchCriterionJSON *, bool> generator("Type FlightSearchCriterion", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
