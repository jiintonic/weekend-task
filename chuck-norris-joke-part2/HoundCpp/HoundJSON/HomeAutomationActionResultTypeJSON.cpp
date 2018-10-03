/* file "HomeAutomationActionResultTypeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationActionResultTypeJSON.h"

#include "HomeAutomationActionResultTypeJSON.h"


HomeAutomationActionResultTypeJSON::TypeValue::TypeValue(void)
  {
  }

HomeAutomationActionResultTypeJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

HomeAutomationActionResultTypeJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool HomeAutomationActionResultTypeJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool HomeAutomationActionResultTypeJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool HomeAutomationActionResultTypeJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool HomeAutomationActionResultTypeJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool HomeAutomationActionResultTypeJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool HomeAutomationActionResultTypeJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

HomeAutomationActionResultTypeJSON::TypeValueKnownValues HomeAutomationActionResultTypeJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "lientActionRequired") == 0)
                return Value_ClientActionRequired;
            break;
        case 'S':
            if (strncmp(&(chars[1]), "erverAction", 11) == 0)
              {
                switch ((unsigned char)(chars[12]))
                  {
                    case 'F':
                        if (strcmp(&(chars[13]), "ailed") == 0)
                            return Value_ServerActionFailed;
                        break;
                    case 'M':
                        if (strcmp(&(chars[13]), "ixedResults") == 0)
                            return Value_ServerActionMixedResults;
                        break;
                    case 'S':
                        if (strcmp(&(chars[13]), "ucceeded") == 0)
                            return Value_ServerActionSucceeded;
                        break;
                    default:
                        break;
                  }
              }
            break;
        default:
            break;
      }
    return Value__none;
  }

const char *HomeAutomationActionResultTypeJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_ClientActionRequired:
            return "ClientActionRequired";
        case Value_ServerActionSucceeded:
            return "ServerActionSucceeded";
        case Value_ServerActionFailed:
            return "ServerActionFailed";
        case Value_ServerActionMixedResults:
            return "ServerActionMixedResults";
        default:
            assert(false);
            return NULL;
      }
  }

HomeAutomationActionResultTypeJSON::HomeAutomationActionResultTypeJSON(const HomeAutomationActionResultTypeJSON &)
  {
    assert(false);
  }

HomeAutomationActionResultTypeJSON &HomeAutomationActionResultTypeJSON::operator=(const HomeAutomationActionResultTypeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HomeAutomationActionResultTypeJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of HomeAutomationActionResultTypeJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "lientActionRequired") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_ClientActionRequired;
                    goto open_enum_is_done;
                  }
            break;
        case 'S':
            if (strncmp(&(json_string->getData()[1]), "erverAction", 11) == 0)
              {
                switch ((unsigned char)(json_string->getData()[12]))
                  {
                    case 'F':
                        if (strcmp(&(json_string->getData()[13]), "ailed") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_ServerActionFailed;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'M':
                        if (strcmp(&(json_string->getData()[13]), "ixedResults") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_ServerActionMixedResults;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'S':
                        if (strcmp(&(json_string->getData()[13]), "ucceeded") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_ServerActionSucceeded;
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
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setValue(the_open_enum);
  }

HomeAutomationActionResultTypeJSON::HomeAutomationActionResultTypeJSON(void) :
        flagHasValue(false)
  {
  }

HomeAutomationActionResultTypeJSON::HomeAutomationActionResultTypeJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

HomeAutomationActionResultTypeJSON::HomeAutomationActionResultTypeJSON(const char *init_value) :
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

HomeAutomationActionResultTypeJSON::HomeAutomationActionResultTypeJSON(std::string init_value) :
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

HomeAutomationActionResultTypeJSON::HomeAutomationActionResultTypeJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

HomeAutomationActionResultTypeJSON::~HomeAutomationActionResultTypeJSON(void)
  {
  }

bool HomeAutomationActionResultTypeJSON::hasValue(void) const
  {
    return flagHasValue;
  }

HomeAutomationActionResultTypeJSON::TypeValue HomeAutomationActionResultTypeJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const HomeAutomationActionResultTypeJSON::TypeValue HomeAutomationActionResultTypeJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *HomeAutomationActionResultTypeJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string HomeAutomationActionResultTypeJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

HomeAutomationActionResultTypeJSON *HomeAutomationActionResultTypeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationActionResultTypeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationActionResultTypeJSON>, HomeAutomationActionResultTypeJSON *, bool> generator("Type HomeAutomationActionResultType", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
