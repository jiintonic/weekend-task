/* file "FlightPassengerTypeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightPassengerTypeJSON.h"

#include "FlightPassengerTypeJSON.h"


FlightPassengerTypeJSON::TypeValue::TypeValue(void)
  {
  }

FlightPassengerTypeJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

FlightPassengerTypeJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool FlightPassengerTypeJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool FlightPassengerTypeJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool FlightPassengerTypeJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool FlightPassengerTypeJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool FlightPassengerTypeJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool FlightPassengerTypeJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

FlightPassengerTypeJSON::TypeValueKnownValues FlightPassengerTypeJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "dult") == 0)
                return Value_Adult;
            break;
        case 'C':
            if (strcmp(&(chars[1]), "hild") == 0)
                return Value_Child;
            break;
        case 'I':
            if (strncmp(&(chars[1]), "nfantIn", 7) == 0)
              {
                switch ((unsigned char)(chars[8]))
                  {
                    case 'L':
                        if (strcmp(&(chars[9]), "ap") == 0)
                            return Value_InfantInLap;
                        break;
                    case 'S':
                        if (strcmp(&(chars[9]), "eat") == 0)
                            return Value_InfantInSeat;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'K':
            if (strcmp(&(chars[1]), "id") == 0)
                return Value_Kid;
            break;
        case 'S':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strcmp(&(chars[2]), "nior") == 0)
                        return Value_Senior;
                    break;
                case 't':
                    if (strcmp(&(chars[2]), "udent") == 0)
                        return Value_Student;
                    break;
                default:
                    break;
              }
            break;
        case 'Y':
            if (strcmp(&(chars[1]), "outh") == 0)
                return Value_Youth;
            break;
        default:
            break;
      }
    return Value__none;
  }

const char *FlightPassengerTypeJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_Adult:
            return "Adult";
        case Value_Senior:
            return "Senior";
        case Value_Student:
            return "Student";
        case Value_Child:
            return "Child";
        case Value_InfantInSeat:
            return "InfantInSeat";
        case Value_InfantInLap:
            return "InfantInLap";
        case Value_Youth:
            return "Youth";
        case Value_Kid:
            return "Kid";
        default:
            assert(false);
            return NULL;
      }
  }

FlightPassengerTypeJSON::FlightPassengerTypeJSON(const FlightPassengerTypeJSON &)
  {
    assert(false);
  }

FlightPassengerTypeJSON &FlightPassengerTypeJSON::operator=(const FlightPassengerTypeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightPassengerTypeJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of FlightPassengerTypeJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "dult") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Adult;
                    goto open_enum_is_done;
                  }
            break;
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "hild") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Child;
                    goto open_enum_is_done;
                  }
            break;
        case 'I':
            if (strncmp(&(json_string->getData()[1]), "nfantIn", 7) == 0)
              {
                switch ((unsigned char)(json_string->getData()[8]))
                  {
                    case 'L':
                        if (strcmp(&(json_string->getData()[9]), "ap") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_InfantInLap;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'S':
                        if (strcmp(&(json_string->getData()[9]), "eat") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_InfantInSeat;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'K':
            if (strcmp(&(json_string->getData()[1]), "id") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Kid;
                    goto open_enum_is_done;
                  }
            break;
        case 'S':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "nior") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Senior;
                            goto open_enum_is_done;
                          }
                    break;
                case 't':
                    if (strcmp(&(json_string->getData()[2]), "udent") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Student;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'Y':
            if (strcmp(&(json_string->getData()[1]), "outh") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Youth;
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

FlightPassengerTypeJSON::FlightPassengerTypeJSON(void) :
        flagHasValue(false)
  {
  }

FlightPassengerTypeJSON::FlightPassengerTypeJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

FlightPassengerTypeJSON::FlightPassengerTypeJSON(const char *init_value) :
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

FlightPassengerTypeJSON::FlightPassengerTypeJSON(std::string init_value) :
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

FlightPassengerTypeJSON::FlightPassengerTypeJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

FlightPassengerTypeJSON::~FlightPassengerTypeJSON(void)
  {
  }

bool FlightPassengerTypeJSON::hasValue(void) const
  {
    return flagHasValue;
  }

FlightPassengerTypeJSON::TypeValue FlightPassengerTypeJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const FlightPassengerTypeJSON::TypeValue FlightPassengerTypeJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *FlightPassengerTypeJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string FlightPassengerTypeJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

FlightPassengerTypeJSON *FlightPassengerTypeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightPassengerTypeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightPassengerTypeJSON>, FlightPassengerTypeJSON *, bool> generator("Type FlightPassengerType", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
