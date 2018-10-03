/* file "FlightSegmentSearchCriterionJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightSegmentSearchCriterionJSON.h"

#include "FlightSegmentSearchCriterionJSON.h"


FlightSegmentSearchCriterionJSON::TypeValue::TypeValue(void)
  {
  }

FlightSegmentSearchCriterionJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

FlightSegmentSearchCriterionJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool FlightSegmentSearchCriterionJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool FlightSegmentSearchCriterionJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool FlightSegmentSearchCriterionJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool FlightSegmentSearchCriterionJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool FlightSegmentSearchCriterionJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool FlightSegmentSearchCriterionJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

FlightSegmentSearchCriterionJSON::TypeValueKnownValues FlightSegmentSearchCriterionJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "rrivalDateTime") == 0)
                return Value_ArrivalDateTime;
            break;
        case 'D':
            if (strncmp(&(chars[1]), "e", 1) == 0)
              {
                switch ((unsigned char)(chars[2]))
                  {
                    case 'p':
                        if (strncmp(&(chars[3]), "arture", 6) == 0)
                          {
                            switch ((unsigned char)(chars[9]))
                              {
                                case 'D':
                                    if (strcmp(&(chars[10]), "ateTime") == 0)
                                        return Value_DepartureDateTime;
                                    break;
                                case 'L':
                                    if (strcmp(&(chars[10]), "ocation") == 0)
                                        return Value_DepartureLocation;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 's':
                        if (strcmp(&(chars[3]), "tinationLocation") == 0)
                            return Value_DestinationLocation;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'F':
            if (strcmp(&(chars[1]), "indNextAvailableFlight") == 0)
                return Value_FindNextAvailableFlight;
            break;
        default:
            break;
      }
    return Value__none;
  }

const char *FlightSegmentSearchCriterionJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_DepartureLocation:
            return "DepartureLocation";
        case Value_DepartureDateTime:
            return "DepartureDateTime";
        case Value_DestinationLocation:
            return "DestinationLocation";
        case Value_ArrivalDateTime:
            return "ArrivalDateTime";
        case Value_FindNextAvailableFlight:
            return "FindNextAvailableFlight";
        default:
            assert(false);
            return NULL;
      }
  }

FlightSegmentSearchCriterionJSON::FlightSegmentSearchCriterionJSON(const FlightSegmentSearchCriterionJSON &)
  {
    assert(false);
  }

FlightSegmentSearchCriterionJSON &FlightSegmentSearchCriterionJSON::operator=(const FlightSegmentSearchCriterionJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightSegmentSearchCriterionJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of FlightSegmentSearchCriterionJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "rrivalDateTime") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_ArrivalDateTime;
                    goto open_enum_is_done;
                  }
            break;
        case 'D':
            if (strncmp(&(json_string->getData()[1]), "e", 1) == 0)
              {
                switch ((unsigned char)(json_string->getData()[2]))
                  {
                    case 'p':
                        if (strncmp(&(json_string->getData()[3]), "arture", 6) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[9]))
                              {
                                case 'D':
                                    if (strcmp(&(json_string->getData()[10]), "ateTime") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_DepartureDateTime;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'L':
                                    if (strcmp(&(json_string->getData()[10]), "ocation") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_DepartureLocation;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 's':
                        if (strcmp(&(json_string->getData()[3]), "tinationLocation") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_DestinationLocation;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'F':
            if (strcmp(&(json_string->getData()[1]), "indNextAvailableFlight") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_FindNextAvailableFlight;
                    goto open_enum_is_done;
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

FlightSegmentSearchCriterionJSON::FlightSegmentSearchCriterionJSON(void) :
        flagHasValue(false)
  {
  }

FlightSegmentSearchCriterionJSON::FlightSegmentSearchCriterionJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

FlightSegmentSearchCriterionJSON::FlightSegmentSearchCriterionJSON(const char *init_value) :
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

FlightSegmentSearchCriterionJSON::FlightSegmentSearchCriterionJSON(std::string init_value) :
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

FlightSegmentSearchCriterionJSON::FlightSegmentSearchCriterionJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

FlightSegmentSearchCriterionJSON::~FlightSegmentSearchCriterionJSON(void)
  {
  }

bool FlightSegmentSearchCriterionJSON::hasValue(void) const
  {
    return flagHasValue;
  }

FlightSegmentSearchCriterionJSON::TypeValue FlightSegmentSearchCriterionJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const FlightSegmentSearchCriterionJSON::TypeValue FlightSegmentSearchCriterionJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *FlightSegmentSearchCriterionJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string FlightSegmentSearchCriterionJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

FlightSegmentSearchCriterionJSON *FlightSegmentSearchCriterionJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightSegmentSearchCriterionJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightSegmentSearchCriterionJSON>, FlightSegmentSearchCriterionJSON *, bool> generator("Type FlightSegmentSearchCriterion", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
