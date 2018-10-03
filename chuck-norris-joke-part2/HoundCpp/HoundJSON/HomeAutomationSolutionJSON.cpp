/* file "HomeAutomationSolutionJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationSolutionJSON.h"

#include "HomeAutomationSolutionJSON.h"


HomeAutomationSolutionJSON::TypeValue::TypeValue(void)
  {
  }

HomeAutomationSolutionJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

HomeAutomationSolutionJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool HomeAutomationSolutionJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool HomeAutomationSolutionJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool HomeAutomationSolutionJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool HomeAutomationSolutionJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool HomeAutomationSolutionJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool HomeAutomationSolutionJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

HomeAutomationSolutionJSON::TypeValueKnownValues HomeAutomationSolutionJSON::stringToValue(const char *chars)
  {
    if (strcmp(chars, "Client") == 0)
        return Value_Client;
    return Value__none;
  }

const char *HomeAutomationSolutionJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_Client:
            return "Client";
        default:
            assert(false);
            return NULL;
      }
  }

HomeAutomationSolutionJSON::HomeAutomationSolutionJSON(const HomeAutomationSolutionJSON &)
  {
    assert(false);
  }

HomeAutomationSolutionJSON &HomeAutomationSolutionJSON::operator=(const HomeAutomationSolutionJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HomeAutomationSolutionJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of HomeAutomationSolutionJSON is not a string.");
    TypeValue the_open_enum;
    if (strcmp(json_string->getData(), "Client") == 0)
          {
            the_open_enum.in_known_list = true;
            the_open_enum.list_value = Value_Client;
            goto open_enum_is_done;
          }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setValue(the_open_enum);
  }

HomeAutomationSolutionJSON::HomeAutomationSolutionJSON(void) :
        flagHasValue(false)
  {
  }

HomeAutomationSolutionJSON::HomeAutomationSolutionJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

HomeAutomationSolutionJSON::HomeAutomationSolutionJSON(const char *init_value) :
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

HomeAutomationSolutionJSON::HomeAutomationSolutionJSON(std::string init_value) :
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

HomeAutomationSolutionJSON::HomeAutomationSolutionJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

HomeAutomationSolutionJSON::~HomeAutomationSolutionJSON(void)
  {
  }

bool HomeAutomationSolutionJSON::hasValue(void) const
  {
    return flagHasValue;
  }

HomeAutomationSolutionJSON::TypeValue HomeAutomationSolutionJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const HomeAutomationSolutionJSON::TypeValue HomeAutomationSolutionJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *HomeAutomationSolutionJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string HomeAutomationSolutionJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

HomeAutomationSolutionJSON *HomeAutomationSolutionJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationSolutionJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationSolutionJSON>, HomeAutomationSolutionJSON *, bool> generator("Type HomeAutomationSolution", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
