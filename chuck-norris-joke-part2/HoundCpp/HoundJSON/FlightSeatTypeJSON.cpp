/* file "FlightSeatTypeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightSeatTypeJSON.h"

#include "FlightSeatTypeJSON.h"


FlightSeatTypeJSON::TypeValue::TypeValue(void)
  {
  }

FlightSeatTypeJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

FlightSeatTypeJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool FlightSeatTypeJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool FlightSeatTypeJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool FlightSeatTypeJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool FlightSeatTypeJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool FlightSeatTypeJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool FlightSeatTypeJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

FlightSeatTypeJSON::TypeValueKnownValues FlightSeatTypeJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            switch ((unsigned char)(chars[1]))
              {
                case 'd':
                    if (strcmp(&(chars[2]), "jacent") == 0)
                        return Value_Adjacent;
                    break;
                case 'i':
                    if (strcmp(&(chars[2]), "sle") == 0)
                        return Value_Aisle;
                    break;
                default:
                    break;
              }
            break;
        case 'B':
            if (strcmp(&(chars[1]), "ulkhead") == 0)
                return Value_Bulkhead;
            break;
        case 'E':
            if (strcmp(&(chars[1]), "xitRow") == 0)
                return Value_ExitRow;
            break;
        case 'O':
            if (strcmp(&(chars[1]), "verwingExitRow") == 0)
                return Value_OverwingExitRow;
            break;
        case 'R':
            if (strcmp(&(chars[1]), "eclining") == 0)
                return Value_Reclining;
            break;
        case 'W':
            if (strcmp(&(chars[1]), "indow") == 0)
                return Value_Window;
            break;
        default:
            break;
      }
    return Value__none;
  }

const char *FlightSeatTypeJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_Window:
            return "Window";
        case Value_Aisle:
            return "Aisle";
        case Value_Reclining:
            return "Reclining";
        case Value_Bulkhead:
            return "Bulkhead";
        case Value_ExitRow:
            return "ExitRow";
        case Value_OverwingExitRow:
            return "OverwingExitRow";
        case Value_Adjacent:
            return "Adjacent";
        default:
            assert(false);
            return NULL;
      }
  }

FlightSeatTypeJSON::FlightSeatTypeJSON(const FlightSeatTypeJSON &)
  {
    assert(false);
  }

FlightSeatTypeJSON &FlightSeatTypeJSON::operator=(const FlightSeatTypeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightSeatTypeJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of FlightSeatTypeJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'd':
                    if (strcmp(&(json_string->getData()[2]), "jacent") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Adjacent;
                            goto open_enum_is_done;
                          }
                    break;
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "sle") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Aisle;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'B':
            if (strcmp(&(json_string->getData()[1]), "ulkhead") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Bulkhead;
                    goto open_enum_is_done;
                  }
            break;
        case 'E':
            if (strcmp(&(json_string->getData()[1]), "xitRow") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_ExitRow;
                    goto open_enum_is_done;
                  }
            break;
        case 'O':
            if (strcmp(&(json_string->getData()[1]), "verwingExitRow") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_OverwingExitRow;
                    goto open_enum_is_done;
                  }
            break;
        case 'R':
            if (strcmp(&(json_string->getData()[1]), "eclining") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Reclining;
                    goto open_enum_is_done;
                  }
            break;
        case 'W':
            if (strcmp(&(json_string->getData()[1]), "indow") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Window;
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

FlightSeatTypeJSON::FlightSeatTypeJSON(void) :
        flagHasValue(false)
  {
  }

FlightSeatTypeJSON::FlightSeatTypeJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

FlightSeatTypeJSON::FlightSeatTypeJSON(const char *init_value) :
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

FlightSeatTypeJSON::FlightSeatTypeJSON(std::string init_value) :
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

FlightSeatTypeJSON::FlightSeatTypeJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

FlightSeatTypeJSON::~FlightSeatTypeJSON(void)
  {
  }

bool FlightSeatTypeJSON::hasValue(void) const
  {
    return flagHasValue;
  }

FlightSeatTypeJSON::TypeValue FlightSeatTypeJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const FlightSeatTypeJSON::TypeValue FlightSeatTypeJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *FlightSeatTypeJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string FlightSeatTypeJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

FlightSeatTypeJSON *FlightSeatTypeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightSeatTypeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightSeatTypeJSON>, FlightSeatTypeJSON *, bool> generator("Type FlightSeatType", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
