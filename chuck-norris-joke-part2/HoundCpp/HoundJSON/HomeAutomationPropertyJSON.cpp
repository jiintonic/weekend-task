/* file "HomeAutomationPropertyJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationPropertyJSON.h"

#include "HomeAutomationPropertyJSON.h"


HomeAutomationPropertyJSON::TypeValue::TypeValue(void)
  {
  }

HomeAutomationPropertyJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

HomeAutomationPropertyJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool HomeAutomationPropertyJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool HomeAutomationPropertyJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool HomeAutomationPropertyJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool HomeAutomationPropertyJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool HomeAutomationPropertyJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool HomeAutomationPropertyJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

HomeAutomationPropertyJSON::TypeValueKnownValues HomeAutomationPropertyJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "urrentTemperature") == 0)
                return Value_CurrentTemperature;
            break;
        case 'M':
            if (strncmp(&(chars[1]), "o", 1) == 0)
              {
                switch ((unsigned char)(chars[2]))
                  {
                    case 't':
                        if (strcmp(&(chars[3]), "ionSensor") == 0)
                            return Value_MotionSensor;
                        break;
                    case 'v':
                        if (strcmp(&(chars[3]), "ementSensor") == 0)
                            return Value_MovementSensor;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'S':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strcmp(&(chars[2]), "nsorReading") == 0)
                        return Value_SensorReading;
                    break;
                case 't':
                    if (strcmp(&(chars[2]), "age") == 0)
                        return Value_Stage;
                    break;
                default:
                    break;
              }
            break;
        case 'T':
            if (strcmp(&(chars[1]), "imeRemaining") == 0)
                return Value_TimeRemaining;
            break;
        default:
            break;
      }
    return Value__none;
  }

const char *HomeAutomationPropertyJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_CurrentTemperature:
            return "CurrentTemperature";
        case Value_TimeRemaining:
            return "TimeRemaining";
        case Value_Stage:
            return "Stage";
        case Value_SensorReading:
            return "SensorReading";
        case Value_MotionSensor:
            return "MotionSensor";
        case Value_MovementSensor:
            return "MovementSensor";
        default:
            assert(false);
            return NULL;
      }
  }

HomeAutomationPropertyJSON::HomeAutomationPropertyJSON(const HomeAutomationPropertyJSON &)
  {
    assert(false);
  }

HomeAutomationPropertyJSON &HomeAutomationPropertyJSON::operator=(const HomeAutomationPropertyJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HomeAutomationPropertyJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of HomeAutomationPropertyJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "urrentTemperature") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_CurrentTemperature;
                    goto open_enum_is_done;
                  }
            break;
        case 'M':
            if (strncmp(&(json_string->getData()[1]), "o", 1) == 0)
              {
                switch ((unsigned char)(json_string->getData()[2]))
                  {
                    case 't':
                        if (strcmp(&(json_string->getData()[3]), "ionSensor") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_MotionSensor;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'v':
                        if (strcmp(&(json_string->getData()[3]), "ementSensor") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_MovementSensor;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'S':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "nsorReading") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_SensorReading;
                            goto open_enum_is_done;
                          }
                    break;
                case 't':
                    if (strcmp(&(json_string->getData()[2]), "age") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Stage;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "imeRemaining") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_TimeRemaining;
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

HomeAutomationPropertyJSON::HomeAutomationPropertyJSON(void) :
        flagHasValue(false)
  {
  }

HomeAutomationPropertyJSON::HomeAutomationPropertyJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

HomeAutomationPropertyJSON::HomeAutomationPropertyJSON(const char *init_value) :
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

HomeAutomationPropertyJSON::HomeAutomationPropertyJSON(std::string init_value) :
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

HomeAutomationPropertyJSON::HomeAutomationPropertyJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

HomeAutomationPropertyJSON::~HomeAutomationPropertyJSON(void)
  {
  }

bool HomeAutomationPropertyJSON::hasValue(void) const
  {
    return flagHasValue;
  }

HomeAutomationPropertyJSON::TypeValue HomeAutomationPropertyJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const HomeAutomationPropertyJSON::TypeValue HomeAutomationPropertyJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *HomeAutomationPropertyJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string HomeAutomationPropertyJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

HomeAutomationPropertyJSON *HomeAutomationPropertyJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationPropertyJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationPropertyJSON>, HomeAutomationPropertyJSON *, bool> generator("Type HomeAutomationProperty", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
