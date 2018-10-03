/* file "HomeAutomationTurboModeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationTurboModeJSON.h"

#include "HomeAutomationTurboModeJSON.h"


HomeAutomationTurboModeJSON::TypeValue::TypeValue(void)
  {
  }

HomeAutomationTurboModeJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

HomeAutomationTurboModeJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool HomeAutomationTurboModeJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool HomeAutomationTurboModeJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool HomeAutomationTurboModeJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool HomeAutomationTurboModeJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool HomeAutomationTurboModeJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool HomeAutomationTurboModeJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

HomeAutomationTurboModeJSON::TypeValueKnownValues HomeAutomationTurboModeJSON::stringToValue(const char *chars)
  {
    if (strncmp(chars, "Turn", 4) == 0)
      {
        switch ((unsigned char)(chars[4]))
          {
            case 'O':
                switch ((unsigned char)(chars[5]))
                  {
                    case 'f':
                        if (strcmp(&(chars[6]), "f") == 0)
                            return Value_TurnOff;
                        break;
                    case 'n':
                        if (chars[6] == 0)
                            return Value_TurnOn;
                        break;
                    default:
                        break;
                  }
                break;
            case 'Q':
                if (strcmp(&(chars[5]), "uiet") == 0)
                    return Value_TurnQuiet;
                break;
            default:
                break;
          }
      }
    return Value__none;
  }

const char *HomeAutomationTurboModeJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_TurnOn:
            return "TurnOn";
        case Value_TurnOff:
            return "TurnOff";
        case Value_TurnQuiet:
            return "TurnQuiet";
        default:
            assert(false);
            return NULL;
      }
  }

HomeAutomationTurboModeJSON::HomeAutomationTurboModeJSON(const HomeAutomationTurboModeJSON &)
  {
    assert(false);
  }

HomeAutomationTurboModeJSON &HomeAutomationTurboModeJSON::operator=(const HomeAutomationTurboModeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HomeAutomationTurboModeJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of HomeAutomationTurboModeJSON is not a string.");
    TypeValue the_open_enum;
    if (strncmp(json_string->getData(), "Turn", 4) == 0)
      {
        switch ((unsigned char)(json_string->getData()[4]))
          {
            case 'O':
                switch ((unsigned char)(json_string->getData()[5]))
                  {
                    case 'f':
                        if (strcmp(&(json_string->getData()[6]), "f") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_TurnOff;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'n':
                        if (json_string->getData()[6] == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_TurnOn;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
                break;
            case 'Q':
                if (strcmp(&(json_string->getData()[5]), "uiet") == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = Value_TurnQuiet;
                        goto open_enum_is_done;
                      }
                break;
            default:
                break;
          }
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setValue(the_open_enum);
  }

HomeAutomationTurboModeJSON::HomeAutomationTurboModeJSON(void) :
        flagHasValue(false)
  {
  }

HomeAutomationTurboModeJSON::HomeAutomationTurboModeJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

HomeAutomationTurboModeJSON::HomeAutomationTurboModeJSON(const char *init_value) :
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

HomeAutomationTurboModeJSON::HomeAutomationTurboModeJSON(std::string init_value) :
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

HomeAutomationTurboModeJSON::HomeAutomationTurboModeJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

HomeAutomationTurboModeJSON::~HomeAutomationTurboModeJSON(void)
  {
  }

bool HomeAutomationTurboModeJSON::hasValue(void) const
  {
    return flagHasValue;
  }

HomeAutomationTurboModeJSON::TypeValue HomeAutomationTurboModeJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const HomeAutomationTurboModeJSON::TypeValue HomeAutomationTurboModeJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *HomeAutomationTurboModeJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string HomeAutomationTurboModeJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

HomeAutomationTurboModeJSON *HomeAutomationTurboModeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationTurboModeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationTurboModeJSON>, HomeAutomationTurboModeJSON *, bool> generator("Type HomeAutomationTurboMode", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
