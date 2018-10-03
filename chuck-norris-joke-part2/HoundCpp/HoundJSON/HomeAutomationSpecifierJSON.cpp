/* file "HomeAutomationSpecifierJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationSpecifierJSON.h"

#include "HomeAutomationSpecifierJSON.h"


HomeAutomationSpecifierJSON::TypeValue::TypeValue(void)
  {
  }

HomeAutomationSpecifierJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

HomeAutomationSpecifierJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool HomeAutomationSpecifierJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool HomeAutomationSpecifierJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool HomeAutomationSpecifierJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool HomeAutomationSpecifierJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool HomeAutomationSpecifierJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool HomeAutomationSpecifierJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

HomeAutomationSpecifierJSON::TypeValueKnownValues HomeAutomationSpecifierJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strncmp(&(chars[1]), "ll", 2) == 0)
              {
                switch ((unsigned char)(chars[3]))
                  {
                    case 'D':
                        if (strcmp(&(chars[4]), "evices") == 0)
                            return Value_AllDevices;
                        break;
                    case 'G':
                        if (strcmp(&(chars[4]), "roups") == 0)
                            return Value_AllGroups;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'B':
            if (strncmp(&(chars[1]), "y", 1) == 0)
              {
                switch ((unsigned char)(chars[2]))
                  {
                    case 'D':
                        if (strcmp(&(chars[3]), "evice") == 0)
                            return Value_ByDevice;
                        break;
                    case 'G':
                        if (strcmp(&(chars[3]), "roup") == 0)
                            return Value_ByGroup;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'H':
            if (strcmp(&(chars[1]), "ere") == 0)
                return Value_Here;
            break;
        default:
            break;
      }
    return Value__none;
  }

const char *HomeAutomationSpecifierJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_ByDevice:
            return "ByDevice";
        case Value_ByGroup:
            return "ByGroup";
        case Value_AllDevices:
            return "AllDevices";
        case Value_AllGroups:
            return "AllGroups";
        case Value_Here:
            return "Here";
        default:
            assert(false);
            return NULL;
      }
  }

HomeAutomationSpecifierJSON::HomeAutomationSpecifierJSON(const HomeAutomationSpecifierJSON &)
  {
    assert(false);
  }

HomeAutomationSpecifierJSON &HomeAutomationSpecifierJSON::operator=(const HomeAutomationSpecifierJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HomeAutomationSpecifierJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of HomeAutomationSpecifierJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strncmp(&(json_string->getData()[1]), "ll", 2) == 0)
              {
                switch ((unsigned char)(json_string->getData()[3]))
                  {
                    case 'D':
                        if (strcmp(&(json_string->getData()[4]), "evices") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_AllDevices;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'G':
                        if (strcmp(&(json_string->getData()[4]), "roups") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_AllGroups;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'B':
            if (strncmp(&(json_string->getData()[1]), "y", 1) == 0)
              {
                switch ((unsigned char)(json_string->getData()[2]))
                  {
                    case 'D':
                        if (strcmp(&(json_string->getData()[3]), "evice") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_ByDevice;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'G':
                        if (strcmp(&(json_string->getData()[3]), "roup") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_ByGroup;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'H':
            if (strcmp(&(json_string->getData()[1]), "ere") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Here;
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

HomeAutomationSpecifierJSON::HomeAutomationSpecifierJSON(void) :
        flagHasValue(false)
  {
  }

HomeAutomationSpecifierJSON::HomeAutomationSpecifierJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

HomeAutomationSpecifierJSON::HomeAutomationSpecifierJSON(const char *init_value) :
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

HomeAutomationSpecifierJSON::HomeAutomationSpecifierJSON(std::string init_value) :
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

HomeAutomationSpecifierJSON::HomeAutomationSpecifierJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

HomeAutomationSpecifierJSON::~HomeAutomationSpecifierJSON(void)
  {
  }

bool HomeAutomationSpecifierJSON::hasValue(void) const
  {
    return flagHasValue;
  }

HomeAutomationSpecifierJSON::TypeValue HomeAutomationSpecifierJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const HomeAutomationSpecifierJSON::TypeValue HomeAutomationSpecifierJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *HomeAutomationSpecifierJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string HomeAutomationSpecifierJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

HomeAutomationSpecifierJSON *HomeAutomationSpecifierJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationSpecifierJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationSpecifierJSON>, HomeAutomationSpecifierJSON *, bool> generator("Type HomeAutomationSpecifier", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
